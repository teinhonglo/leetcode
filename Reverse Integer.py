class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        neg = False
        reStr = ""
        
        MAX_INT = 2147483647
        MIN_INT = -2147483647
           
        if x < 0:
            x *= -1
            neg = True
            
        while True:
            reStr += str(x % 10)
            x /= 10
            if x == 0:
                break
            
        if neg:
            reStr = '-' + reStr
        
        reInt = int(reStr)
        if reInt > MAX_INT or reInt < MIN_INT :
            return 0
        else:    
            return reInt