class Solution:

    
    
    def __init__(self, head: ListNode):
        self.arr = []
        while head:
            self.arr.append(head.val)
            head = head.next
        
        
       

    def getRandom(self) -> int:
        return random.choice(self.arr)