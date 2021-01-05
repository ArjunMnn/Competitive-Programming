# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        p1 = l1
        p2 = l2
        if not l1 and not l2:
            return 
        if not l1:
            return l2
        if not l2:
            return l1
        if p1.val<=p2.val:
            head = p1
        else:
            head = p2
        prev1 = None
        prev2 = None
        while p1 and p2:
            # print(p1.val,p2.val)
            if p1.val<=p2.val:
                if prev2:
                    prev2.next = p1
                    nexx = p1.next
                    p1.next = p2
                    prev2 = p1
                    p1 = nexx
                    prev1 = None
                else:
                    prev1 = None
                    prev2 = p1
                    nexx = p1.next
                    p1.next = p2
                    p1 = nexx
            else:
                if prev1:
                    prev1.next = p2
                    nexx = p2.next
                    p2.next = p1
                    prev1 = p2
                    p2 = nexx
                    prev2 = None
                    
                else:
                    prev2 = None
                    prev1 = p2
                    nexx = p2.next
                    p2.next = p1
                    p2 = nexx
        # if p1 or p2:
            
        return head
    
    
    