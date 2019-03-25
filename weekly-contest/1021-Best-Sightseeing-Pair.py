class Solution(object):
    def maxScoreSightseeingPair(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        cur_price = max_profit = 0
        
        for a in A:
            if cur_price + a > max_profit:
                max_profit = cur_price + a
            if a > cur_price:
                cur_price = a
            cur_price -= 1
        return max_profit
