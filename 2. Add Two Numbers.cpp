//  adding by taking all condition together

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode ans(0),*temp=&ans;
        ListNode*t1=l1,*t2=l2;
        
        while(t1 || t2 || carry)
        {
            int n=(t1 ? t1->val : 0) + (t2 ? t2->val : 0) + carry;
            temp->next=new ListNode(n%10);
            temp=temp->next;
            carry=n/10;
            t1=(t1?t1->next:0);
            t2=(t2?t2->next:0);
        }
        
        return ans.next;
        
    }
};



//   adding by taking every condition separately

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode p(0),*temp=&p;
        ListNode*t1=l1,*t2=l2;
        
        while(t1 && t2)
        {
            int n=carry+t1->val+t2->val;
            temp->next=new ListNode(n%10);
            temp=temp->next;
            carry=n/10;
            t1=t1->next;
            t2=t2->next;
        }
        while(t1)
        {
            int n=carry+t1->val;
            temp->next=new ListNode(n%10);
            temp=temp->next;
            carry=n/10;
            t1=t1->next;
        }
        while(t2)
        {
            int n=carry+t2->val;
            temp->next=new ListNode(n%10);
            temp=temp->next;
            carry=n/10;
            t2=t2->next;
        }
        if(carry)
            temp->next=new ListNode(carry);
        return p.next;
        
    }
};


