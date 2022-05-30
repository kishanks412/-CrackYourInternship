class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL)
            return 0;
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        return (slow==fast);
    }
};
