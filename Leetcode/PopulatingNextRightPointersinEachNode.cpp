class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        Node* leftmost = root;
        while(leftmost->left){
            Node* head = leftmost;
            while(head){
                if(head->left)
                    head->left->next = head->right;
                if(head->right && head->next)
                    head->right->next = head->next->left;
                head = head->next;
            }
            leftmost = leftmost->left;
        }
        return root;
    }
};