/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return head;
        ListNode* curr = head;
        ListNode* nex = head->next;
        ListNode* prev = new ListNode(-1000);
        prev->next = curr;
        if(!nex)
           return head; 
        
        while(nex){
            // cout << prev->val << " " << curr->val << " " << nex->val << endl;
            if(curr->val == nex->val){
                while(nex && curr->val==nex->val){
                    nex = nex->next;
                    curr = curr->next;
                }
                    
                if(prev->val==-1000){
                    head = nex;
                }
                
                prev->next = nex;
                curr->next = NULL;
                curr = prev->next;
                if(curr)
                    nex = curr->next;
            }
            else{
                curr = curr->next;
                nex = nex->next;
                prev = prev->next;
            }
        }
        return head;
    }
};