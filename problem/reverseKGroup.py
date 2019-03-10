# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def reverseKGroup(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        cur_P = head
        while cur_P:
            basket = []
            for i in xrange(k):
                basket.append(cur_P)
                cur_P = cur_P.next
                if cur_P == None:
                    break
            if len(basket) == k:
                for i in xrange(k / 2):
                    basket[i].val, basket[-(i + 1)].val = basket[-(i + 1)].val, basket[i].val
            else:
                break
        return head
                    
        