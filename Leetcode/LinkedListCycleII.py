class Solution:
    def detectCycle(self, head: ListNode) -> ListNode:
        if not head:
            return 
        hare = head
        tor = head
        try:
            while True:
                hare = hare.next.next
                tor = tor.next
                if hare == tor:
                    hare = head
                    break
            while True:
                if hare == tor:
                    return hare
                hare = hare.next
                tor = tor.next
                
        except:
            return None