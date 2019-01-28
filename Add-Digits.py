class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        cur_sum = 10
        while cur_sum >= 10:
            cur_sum = 0
            while num > 0:
                cur_sum += num % 10
                num /= 10
            num = cur_sum
        return cur_sum