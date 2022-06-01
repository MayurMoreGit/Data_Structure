#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *createNode()
{
struct Node*t;
t=(struct Node *)malloc(sizeof(struct Node));
}
struct Node *start;
void addAtEnd(int data)
{
struct Node *t,*j;
t=createNode();
t->data=data;
t->next=NULL;
if(start==NULL)
{
start=t;
}
else
{
j=start;
while(j->next!=NULL)
{
j=j->next;
}
j->next=t;
}
}
void insertAtTop(int data)
{
struct Node *t;
t=createNode();
t->data=data;
t->next=start;
start=t;
}
void insertAt(int pos,int data)
{
struct Node *p1,*p2,*t;
int x;
t=createNode();
t->data=data;
t->next=NULL;
if(start==NULL)
{
start=t;
return;
}
if(pos<0)
{
pos=0;
}
for(p1=start,x=1;p1!=NULL && x<=pos;x++)
{
p2=p1;
p1=p1->next;
}
if(p1==NULL)
{
p2->next=t;
return;
}
if(p1==start)
{
t->next=start;
start=t;
return;
}
t->next=p1;
p2->next=t;
}
int removeAt(int pos)
{
struct Node *p1,*p2;
int x;
if(start==NULL || pos<0) return -1;
for(p1=start,x=1;p1!=NULL && x<=pos;x++)
{
p2=p1;
p1=p1->next;
}
if(p1==NULL) return -1;
if(p1==start)
{
start=start->next;
}
else
{
p2->next=p1->next;
}
free(p1);
}
void traverseTopToBottom()
{
struct Node *t;
for(t=start; t!=NULL;t=t->next)
{
printf("%d\n",t->data);
}
}
void _traverseBottomToTop(struct Node *t)
{
if(t==NULL) return;
_traverseBottomToTop(t->next);
printf("%d\n",t->data);
}
void traverseBottomToTop()
{
_traverseBottomToTop(start);
}
int main()
{
int ch,num,pos;
start=NULL;
while(1)
{
printf("1. Add at end\n");
printf("2. Insert at Top\n");
printf("3. Inert at Position\n");
printf("4. Remove\n");
printf("5. traverse Top To Bottom\n");
printf("6. traverse Bottom To Top\n");
printf("7. Add at end\n");
printf("Enter Your choice : ");
scanf("%d",&ch);
fflush(stdin);
if(ch==1)
{
printf("Enter  the Number to Add at end : ");
scanf("%d",&num);
fflush(stdin);
addAtEnd(num);
}else
if(ch==2)
{
printf("Enter  the Number to insert at top : ");
scanf("%d",&num);
fflush(stdin);
insertAtTop(num);
}else
if(ch==3)
{
printf("Enter  the Number to insert : ");
scanf("%d",&num);
fflush(stdin);
printf("Enter  the Position : ");
scanf("%d",&pos);
fflush(stdin);
insertAt(pos,num);
}else
if(ch==4)
{
printf("Enter  the Position of the Number to remove : ");
scanf("%d",&pos);
fflush(stdin);
if(removeAt(pos)==-1)
{
printf("Invalid position %d\n",pos);
}
}else
if(ch==5) traverseTopToBottom();
else if(ch==6) traverseBottomToTop();
else if(ch==7) break;
else
{
printf("invalid choice\n");
}
}
return 0;
}