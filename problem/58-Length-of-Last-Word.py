class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        ss = s.split()
        if len(s) == 0 or len(ss) == 0:
            return 0
        else:
            return len(ss[-1])
