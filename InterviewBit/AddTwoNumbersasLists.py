# Definition for singly-linked list.
# class ListNode:
#    def __init__(self, x):
#        self.val = x
#        self.next = None

class Solution:
    # @param A : head node of linked list
    # @param B : head node of linked list
    # @return the head node in the linked list
    def addTwoNumbers(self, A, B):
        p = A
        q = B
        carry = 0
        res = ListNode(0)
        head = res
        while q or p:
            a1 = p.val if p else 0
            a2 = q.val if q else 0
            summ=carry
            summ+=(a1+a2)
            carry = summ//10
            summ = summ%10
            res.next = ListNode(summ)
            res=res.next
            if p:
                p = p.next
            if q:
                q = q.next
        if carry>0:
            res.next = ListNode(carry)
        return head.next
            