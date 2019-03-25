class Solution(object):
    def num2bin(self, N):
        bin_str = ""
        while(N):
            bin_str = str(N % 2) + bin_str
            N /=2
        return bin_str
    
    def queryString(self, S, N):
        """
        :type S: str
        :type N: int
        :rtype: bool
        """
        is_substr = True;
        for i in range(N, 0, -1):
            if S.find(self.num2bin(i)) > -1:
                continue
            else:
                is_substr = False
                break
        
        return is_substr
