class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        import sys
        min_price = sys.maxint
        max_profit = 0
        for i, cur_price in enumerate(prices):
            if cur_price < min_price:
                min_price = cur_price
            elif (cur_price - min_price) > max_profit:
                max_profit = cur_price - min_price
        return max_profit
