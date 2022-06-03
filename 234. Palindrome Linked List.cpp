class Solution {
public:
    ListNode*reverse(ListNode*head){
        if(head==NULL || head->next==NULL)
            return head;
        ListNode*ans=reverse(head->next);
        ListNode*temp=head->next;
        temp->next=head;
        head->next=NULL;
        return ans;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*rev=reverse(slow->next);
        slow->next=NULL;
        ListNode*temp=head;
        while(rev)
        {
            if(temp->val!=rev->val)
                return false;
            temp=temp->next;
            rev=rev->next;
        }
        return true;
    }
};