tion for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        # check wheter value of root is empty or not
        if root == None: return []
        # initialize
        stack = [root]
        top_down = [[root.val]]
        # depth first search (DFS)
        # recording value of each level
        while stack:
            level = [[],[]]
            # traversal current level
            for node in stack:
                if node.left:
                    level[0].append(node.left)
                    level[1].append(node.left.val)
                if node.right:
                    level[0].append(node.right)
                    level[1].append(node.right.val)
            # next level
            stack = level[0]
            # recoring value of current level
            if len(level[1]) > 0: top_down.append(level[1])
        return top_down
