/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode *ptr1 = headA;
    struct ListNode *ptr2 = headB;
    while(ptr1!=ptr2){
        if(ptr1!=NULL)
            ptr1 = ptr1->next;
        else
            ptr1 = headB;
        if(ptr2!=NULL)
            ptr2 = ptr2->next;
        else
            ptr2 = headA;
    }
    return ptr1;
}