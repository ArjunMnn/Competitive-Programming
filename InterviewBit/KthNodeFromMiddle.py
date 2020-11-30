# Definition for singly-linked list.
# class ListNode:
#    def __init__(self, x):
#        self.val = x
#        self.next = None

class Solution:
    # @param A : head node of linked list
    # @param B : integer
    # @return an integer
    def solve(self, head, B):
        ptr = head
        n = 0
        while ptr:
            n+=1
            ptr = ptr.next
        mid = (n//2)+1
        t = mid-(B+1)
        p = head
        for i in range(t):
            p = p.next
        return p.val
            
        
        
