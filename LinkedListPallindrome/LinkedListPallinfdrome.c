#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *start=NULL;
struct Node *createNode (int data)
{
struct Node *t;
t=(struct Node *)malloc(sizeof(struct Node));
t->data=data;
t->next=NULL;
return t;
};
void createLinkedList()
{
struct Node *n1,*n2,*n3,*n4,*n5;
n1=createNode(1);
n2=createNode(2);
//n3=createNode(2);
//n4=createNode(1);
//n5=createNode(10);
start=n1;
n1->next=n2;
//n2->next=n3;
//n3->next=n4;
//n4->next=n5;
}
void releaseStack(struct Node *b)
{
struct Node *t;
while(b!=NULL)
{
t=b;
b=b->next;
free(t);
}
}
int isPalindrome(struct Node *b)
{
struct Node *t,*top,*p1,*p2;
top=NULL;
int count;
if(b==NULL) return 0;
if(b->next==NULL) return 1;
p2=b;
p1=b->next;
count=1;
//push a node on stack
t=createNode(p2->data);
t->next=top;
top=t;
while(p1!=NULL)
{
p2=p2->next;
t=createNode(p2->data);
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
if(p2->data!=top->data)
{
releaseStack(top);
return 0;
}
t=top;
top=top->next;
free(t);
p2=p2->next;
}
return 1;
}
int main()
{
createLinkedList();
if(isPalindrome(start)) printf("Pallindrome");
else printf("is not Pallindrome");
return 0;
}
