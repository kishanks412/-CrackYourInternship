class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode*temp=head;
        ListNode t1(0),t2(0);
        ListNode*t3=&t1,*t4=&t2;
        while(temp)
        {
            if(temp->val<x)
            {
                t3->next=temp;
                temp=temp->next;
                t3=t3->next;
            }
            else
            {
                t4->next=temp;
                temp=temp->next;
                t4=t4->next;
            }
        }
        t4->next=NULL;
        t3->next=t2.next;
        return t1.next;
    }
};