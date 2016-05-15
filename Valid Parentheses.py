class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        left = ['(', '[', '{']
        right = [')', ']', '}']
        compare = []
        isVal = True
        for c in s:
            if c in left:
                compare.append(c)
            if c in right:
                if len(compare) > 0:
                    cmpChar = compare[-1]
                    lfIdx = left.index(cmpChar)
                    rtIdx = right.index(c)
                    if lfIdx == rtIdx:
                        compare.pop()
                        continue
                    else:
                        isVal = False
                        break
                else:
                    isVal = False
                    break
        if len(compare) > 0:
            isVal = False
        return isVal