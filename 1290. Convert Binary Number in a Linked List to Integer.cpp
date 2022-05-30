class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int n=0;
        ListNode*temp=head;
        while(temp!=NULL)
        {
            n<<=1;
            n+=temp->val;
            temp=temp->next;
        }
        return n;
        
    }
};