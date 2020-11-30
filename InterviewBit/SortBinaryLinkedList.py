# Definition for singly-linked list.
# class ListNode:
#    def __init__(self, x):
#        self.val = x
#        self.next = None

class Solution:
    # @param A : head node of linked list
    # @return the head node in the linked list
    def solve(self, head):
        p1 = head
        nz = 0
        no = 0
        while p1:
            if p1.val == 1:
                no+=1
            else:
                nz+=1
            p1 = p1.next
        p2 = head
        while p2:
            if nz>0:
                p2.val = 0
                nz-=1
            else:
                p2.val = 1
            p2 = p2.next
        return head
