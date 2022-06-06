class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp1=headA,*temp2=headB;
        int a=0,b=0;
        while(temp1)
        {
            a++;
            temp1=temp1->next;
        }
        while(temp2)
        {
            b++;
            temp2=temp2->next;
        }
        temp1=headA,temp2=headB;
        while(a-b>0){
            temp1=temp1->next;
            a--;
        }
                
        //cout<<temp1->val;
        while(b-a>0){
            temp2=temp2->next;
            b--;
        }
        while(temp1 && temp2)
        {
            if(temp1==temp2)
                break;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return temp1;
	}
    
};