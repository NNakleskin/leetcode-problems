#You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

#You may assume the two numbers do not contain any leading zero, except the number 0 itself.


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next



# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        n1 = ""
        n2 = ""
        tmp = l1
        while(tmp != None):
            n1 += str(tmp.val)
            tmp = tmp.next
        tmp = l2
        while(tmp != None):
            n2 += str(tmp.val)
            tmp = tmp.next

        res = int(n1[::-1]) + int(n2[::-1])
        res = str(res)[::-1]

        root = ListNode()
        tmp = root

        i = 0
        for ch in res:
            tmp.val = int(ch)
            if i != len(res) - 1:
                tmp.next = ListNode()
                tmp = tmp.next
            i += 1

        print(res, n1, n2)
        return root
