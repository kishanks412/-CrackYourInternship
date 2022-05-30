class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1,s2,s3;
        ListNode*t1=l1,*t2=l2;
        while(t1)
        {
            s1.push(t1->val);
            t1=t1->next;
        }
        while(t2)
        {
            s2.push(t2->val);
            t2=t2->next;
        }
        int c=0;
        while(!s1.empty() || !s2.empty() || c)
        {
            int n =(!s1.empty()?s1.top():0) + (!s2.empty()?s2.top():0) + c;
            s3.push(n%10);
            c=n/10;
            if(!s1.empty())
                s1.pop();
            if(!s2.empty())
                s2.pop();
        }
        ListNode ans,*p=&ans;
        while(!s3.empty())
        {
            p->next=new ListNode(s3.top());
            s3.pop();
            p=p->next;
        }
        return ans.next;
    }
};