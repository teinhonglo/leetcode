class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        twoSum = []
        for idx1 in range(len(nums)):
            try:
                idx2 = nums[idx1 + 1:].index(target - nums[idx1]) + idx1 + 1
                twoSum.append(idx1)
                twoSum.append(idx2)
                break
            except:
                pass
        return twoSum