class Solution:
    def rotateRight(self, head: ListNode, k: int) -> ListNode:
        if not head:
            return
        ptr = head
        n = 0
        while ptr is not None:
            if ptr.next == None:
                tail = ptr
            ptr = ptr.next
            n+=1
        tail.next = head
        k = k%n
        t = n - k
        while t:
            head = head.next
            t-=1
        ptr = head
        while ptr.next!=head:
            ptr = ptr.next
        ptr.next = None
        return head