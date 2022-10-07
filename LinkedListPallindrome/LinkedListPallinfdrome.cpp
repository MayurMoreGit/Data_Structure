class Solution {
public:
     ListNode *createNode(int val)
     {
      ListNode *t;
      t=(ListNode *)malloc(sizeof(ListNode));
      t->val=val;
      t->next=NULL;
     return t;
     }   
    void releaseStack(ListNode *b)
    {
        ListNode *t;
        while(b!=NULL)
        {
            t=b;
            b=b->next;
            free(t);
        }
    }
    bool isPalindrome(ListNode* head) {
      ListNode *top,*p1,*p2,*t;
        int count;
        top=NULL;
        if(head==NULL) return false;
        if(head->next==NULL) return true;
        p2=head;
        p1=head->next;
        count=1;
        //push
        t=createNode(p2->val);
        t->next=top;
        top=t;
        while(p1!=NULL)
        {
            p2=p2->next;
            t=createNode(p2->val);
            t->next=top;
            top=t;
            if(p1->next==NULL)
            {
                count+=1;
                break;
            }
            count+=2;
            p1=p1->next->next;
        }
        if(count%2==0)
        {
            t=top;
            top=top->next;
            free(t);
        }
        while(p2!=NULL)
        {
        if(p2->val!=top->val)
        {
            releaseStack(top);
            return false;
        }
            t=top;
            top=top->next;
            free(t);
            p2=p2->next;
        }
        return true;
        
        
    }
};
