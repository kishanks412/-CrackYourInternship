class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode*fast=head,*slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        if(fast->next!=NULL)
            return slow->next;;
        return slow;
    }
};