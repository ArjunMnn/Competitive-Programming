# Definition for singly-linked list.
# class ListNode:
#	def __init__(self, x):
#		self.val = x
#		self.next = None

class Solution:
	# @param A : head node of linked list
	# @return the head node in the linked list
	def deleteDuplicates(self, head):
	    if not head or not head.next:
	        return head
        ptr = head.next
        prev = head
        while ptr:
            if prev.val==ptr.val:
                prev.next = ptr.next
                ptr.next = None
                ptr = prev.next
                
            else:
                prev = prev.next
                ptr = ptr.next
        return head
