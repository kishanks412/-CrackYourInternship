class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode*rev=reverseList(head->next);
        
        
        ListNode*tail=head->next;
        tail->next=head;
        head->next=NULL;
        return rev;
        
        
    }
};