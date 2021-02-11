"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, head: 'Node') -> 'Node':
        if not head:
            return
        ptr = head 
        b = 1
        while ptr:
            temp = ptr.next
            ptr.next = Node(ptr.val)
            ptr.next.next = temp
            ptr = ptr.next.next
        ptr = head
        while ptr and ptr.next:
            if ptr.random:
                ptr.next.random = ptr.random.next
            else:
                ptr.next.random = None
            ptr = ptr.next.next
        ptr = head.next
        
        while ptr and ptr.next:
            
            temp = ptr.next.next
            ptr.next.next = None
            ptr.next = temp
            ptr = ptr.next
        temp = head.next
        head.next = None
        head = temp
        return head
        
        