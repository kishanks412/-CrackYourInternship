// by comparing each element

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode *temp;
		while(headA != NULL){
			temp = headB;
			while(temp != NULL){
				if(headA == temp){
					return headA;
				}
				temp = temp -> next;
			}
			headA = headA -> next;
		}
		return NULL;
	}
};


// length differnece solution


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



// two pointer solution

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode *ptr1 = headA;
		ListNode *ptr2 = headB;
		while(ptr1 != ptr2){
			if(ptr1 == NULL){
				ptr1 = headB;
			}
			else{
				ptr1 = ptr1 -> next;
			}
			if(ptr2 == NULL){
				ptr2 = headA;
			}
			else{
				ptr2 = ptr2 -> next;
			}
		}
		return ptr1;
	}
};