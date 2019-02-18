class Solution(object):
    def minKBitFlips(self, A, K):
        """
        :type A: List[int]
        :type K: int
        :rtype: int
        """
        cur_flip = 0
        tol_flip = 0
        for i in range(len(A)):
            if i >= K and A[i - K] == 2:
                cur_flip -= 1
            # cur is even, A[i] = 0
            # cur is odd, A[i] = 1
            if cur_flip % 2 == A[i]:
                if i + K > len(A):
                    return -1
                A[i] = 2
                cur_flip += 1
                tol_flip += 1
        return tol_flip
