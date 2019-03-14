# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def zigzagLevelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        if root == None: return []
        zigzag = [[root.val]]
        stack = [root]
        turn_right = True
        while len(stack) > 0:
            level = [[],[]]
            # level order traversal
            for node in stack:
                if node.left:
                    level[0].append(node.left)
                    level[1].append(node.left.val)
                if node.right:
                    level[0].append(node.right)
                    level[1].append(node.right.val)
                    
            stack = level[0]
            
            if len(level[0]) > 0 :
                # zigzag left to right
                if turn_right:
                    level[1].reverse()
                zigzag.append(list(level[1]))
            turn_right = (not turn_right)
            
        return zigzag
