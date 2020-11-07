# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        def reverse(head):
            if not head:
                return 
            ptr = head
            prev = None
            nex = ptr.next
            while ptr:
                ptr.next = prev
                prev = ptr
                ptr = nex
                if nex:
                    nex = nex.next
            head = prev
            return head
        l1 = reverse(l1)
        l2 = reverse(l2)
        res = ListNode(0)
        curr = res
        carry = 0
        while l1 or l2:
            x = l1.val if l1 else 0
            y = l2.val if l2 else 0 
            summ = carry + x + y
            carry = summ//10
            curr.next = ListNode(summ%10)
            curr = curr.next
            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next
        if carry>0:
            curr.next = ListNode(carry)
        res = reverse(res.next)
        return res