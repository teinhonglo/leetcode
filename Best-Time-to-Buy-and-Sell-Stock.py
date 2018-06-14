class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        import sys
        min_profit = sys.maxint
        max_profit = 0
        for i, p in enumerate(prices):
            if prices[i] < min_profit:
                min_profit = prices[i]
            elif (prices[i] - min_profit) > max_profit:
                max_profit = prices[i] - min_profit
        return max_profit         