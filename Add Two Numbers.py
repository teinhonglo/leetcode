# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        answer = []
        carryFlag = False
        l1_val = l1.val
        l2_val = l2.val
        digitSum = l1_val + l2_val
        
        if digitSum > 9:
            digitSum %= 10
            carryFlag = True
        else:
            carryFlag = False
            
        answer.append(digitSum)
        
        while l1.next != None or l2.next != None:
            
            if l1.next != None:
                l1 = l1.next
                l1_val = l1.val
            else:
                l1_val = 0
                
            if l2.next != None:
                l2 = l2.next
                l2_val = l2.val
            else:
                l2_val = 0
            
            if carryFlag:
                digitSum = l1_val + l2_val + 1
            else:
                digitSum = l1_val + l2_val
            
            if digitSum > 9:
                digitSum %= 10
                carryFlag = True
            else:
                carryFlag = False
                
            answer.append(digitSum)
            
        if carryFlag:
            answer.append(1)
            
        return answer