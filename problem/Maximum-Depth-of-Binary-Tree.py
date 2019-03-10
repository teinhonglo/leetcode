# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def maxDepth(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        # check if treeNode is empty, then return zero value
        if root == None: return 0
        stack = [root]
        max_depth = 0
        # depth first search (DFS)
        while stack:
            level = []
            max_depth += 1
            # storage each nodes in the same level
            for node in stack:
                if node.left:
                    level.append(node.left)
                if node.right:
                    level.append(node.right)
            # point to the next level
            stack = level
        return max_depth
