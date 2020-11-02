class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* ptr = head;
        string s = "";
        while(ptr!=NULL){
            s+=to_string(ptr->val);
            ptr=ptr->next;
        }
        
        int m = 0;
        int num = 0;
        for(int i = s.length()-1;i>=0;i--){
            num+=(s[i]-48)*pow(2,m);
            m++;
        }
        return num;
    }
};