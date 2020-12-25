class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* curr = head;
        ListNode* nexx = head->next;
        
        ListNode* prev = new ListNode();
        head = nexx;
        while(nexx && curr){
            curr->next = nexx->next;
            nexx->next = curr;
            prev->next = nexx;
            nexx = nexx->next;
            prev = curr;
            curr = curr->next;
            if(curr)
                nexx = curr->next;
        }
        return head;
    }
};