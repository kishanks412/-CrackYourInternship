class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
//         head->next=removeElements(head->next,val);
//         if(head->val==val)
//             return head->next;
//         return head;
        while(head && head->val == val)
            head=head->next;
        ListNode* curr=head;
        while(curr!=NULL  && curr->next!=NULL)
        {
            if(curr->next->val==val)
            {
                curr->next=curr->next->next;
                continue;
            }
            curr=curr->next;
                
        }
        return head;
    }
};