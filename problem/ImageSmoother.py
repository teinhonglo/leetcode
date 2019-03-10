import copy
class Solution(object):
    def imageSmoother(self, M):
        """
        :type M: List[List[int]]
        :rtype: List[List[int]]
        """
        cp_M = copy.deepcopy(M)
        width = len(M)
        height = len(M[0])
        
        for i, row_val in enumerate(M):
            for j, col_val in enumerate(row_val):
                inc_val = 0
                inc_count = 0
                for i_inc in xrange(-1, 2, 1):
                    for j_inc in xrange(-1, 2, 1):
                        n_i = i + i_inc
                        n_j = j + j_inc
                        if n_i < 0 or n_i >= width or n_j < 0 or n_j >=height:
                            continue
                        else:
                            inc_val += M[i + i_inc][j + j_inc]
                            inc_count += 1
                            
                cp_M[i][j] = inc_val / inc_count
        return cp_M      