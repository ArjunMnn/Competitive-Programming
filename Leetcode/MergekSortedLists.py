# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        res = ListNode(0);
        head = res
        arr = []
        for ll in lists:
            while ll:
                arr.append(ll.val)
                ll = ll.next
        arr.sort()
        for i in arr:
            res.next = ListNode(i)
            res = res.next
        return head.next
        