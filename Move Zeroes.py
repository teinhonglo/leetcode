class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        popIdx = []
        count = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                popIdx.append(i - count)
                count += 1
        
        for p in popIdx:
            nums.pop(p)
            nums.append(0)
            