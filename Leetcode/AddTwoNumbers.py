# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        p = l1
        q = l2
        head = ListNode(0)
        curr = head
        carry = 0
        while p or q:
            x = p.val if p else 0
            y = q.val if q else 0
            summ = carry+x+y
            carry = summ//10
            curr.next = ListNode(summ%10)
            if p: p = p.next
            if q: q = q.next
        if carry>0:
            curr.next = ListNode(carry)
        return head.next
                
            
        