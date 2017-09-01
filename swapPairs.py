# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def swapPairs(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        prev = head
        while prev:
            cur = prev.next
            if cur != None:
                prev.val, cur.val = cur.val, prev.val
            else:    
                break
            prev = cur.next
        return head    