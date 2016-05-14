class Solution(object):
    def getHint(self, secret, guess):
        """
        :type secret: str
        :type guess: str
        :rtype: str
        """
        numA = 0
        numB = 0
        ComparisonIdx = list(secret[:])
        GuessIdx = list(guess)
        for i in range(len(secret)):
            if guess[i] == secret[i]:
                numA += 1
                ComparisonIdx.pop(ComparisonIdx.index(guess[i]))
                GuessIdx.pop(GuessIdx.index(guess[i]))
        
        for g in GuessIdx:
            for elem in ComparisonIdx:
                if g == elem:
                    numB += 1
                    ComparisonIdx.pop(ComparisonIdx.index(elem))
                    break
                else:
                    continue
                        
        
        return str(numA) + 'A' + str(numB) + 'B'
                
        