#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
struct Node *previous;
};
struct Node *createNode()
{
struct Node*t;
t=(struct Node *)malloc(sizeof(struct Node));
}
struct Node *start;
struct Node *end;
void addAtEnd(int data)
{
struct Node *t;
t=createNode();
t->data=data;
t->next=NULL;
t->previous=NULL;
if(start==NULL)
{
start=end=t;
}
else
{
end->next=t;
t->previous=end;
end=t;
}
}
void insertAtTop(int data)
{
struct Node *t;
t=createNode();
t->data=data;
t->next=NULL;
t->previous=NULL;
if(start==NULL)
{
start=end=t;
}
else
{
start->previous=t;
t->next=start;
start=t;
}
}
int insertAt(int pos,int data)
{
struct Node *p1,*t;
int x;
if(pos<0) return 0;
p1=start;
x=0;
while(p1!=NULL && x<pos)
{
p1=p1->next;
x++;
}
if(p1==NULL && x<pos)
{
printf("Invalid position");
return 0;
}
t=createNode();
t->data=data;
t->next=NULL;
t->previous=NULL;
if(p1==NULL)
{
if(start==NULL)
{
start=end=t;
}
else
{
end->next=t;
t->previous=end;
end=t;
}
return 1;
}
if(p1==start)
{
start->previous=t;
t->next=start;
start=t;
return 1;
}
t->next=p1;
t->previous=p1->previous;
p1->previous->next=t;
p1->previous=t;
return 1;
}
int removeAt(int pos)
{
struct Node *p1;
int x;
if(pos<0) return 0;
p1=start;
x=0;
while(p1!=NULL && x<pos)
{
p1=p1->next;
x++;
}
if(p1==NULL && x<pos)
{
printf("Invalid position");
return 0;
}
if(p1==start && p1==end)
{
start=NULL;
end=NULL;
free(p1);
return 1;
}
if(p1==start)
{
start=start->next;
start->previous=NULL;
free(p1);
return 1;
}
if(p1==end)
{
end=end->previous;
end->next=NULL;
free(p1);
return 1;
}
p1->previous->next=p1->next;
p1->next->previous=p1->previous;
free(p1);
return 1;
}
void traverseTopToBottom()
{
struct Node *t;
for(t=start; t!=NULL;t=t->next)
{
printf("%d\n",t->data);
}
}
void traverseBottomToTop()
{
struct Node *t;
for(t=end; t!=NULL;t=t->previous)
{
printf("%d\n",t->data);
}
}
int main()
{
int ch,num,pos;
start=NULL;
end=NULL;
while(1)
{
printf("1. Add at end\n");
printf("2. Insert at Top\n");
printf("3. Insert at Position\n");
printf("4. Remove\n");
printf("5. traverse Top To Bottom\n");
printf("6. traverse Bottom To Top\n");
printf("7. Exit\n");
printf("Enter Your choice : ");
scanf("%d",&ch);
fflush(stdin);
if(ch==1)
{
printf("Enter  the Number to Add at end : ");
scanf("%d",&num);
fflush(stdin);
addAtEnd(num);
printf("%d added at end\n",num);
}else
if(ch==2)
{
printf("Enter  the Number to insert at top : ");
scanf("%d",&num);
fflush(stdin);
insertAtTop(num);
printf("%d added at top\n",num);
}else
if(ch==3)
{
printf("Enter  the Number to insert : ");
scanf("%d",&num);
fflush(stdin);
printf("Enter  the Position : ");
scanf("%d",&pos);
fflush(stdin);
if (insertAt(pos,num))
{
printf("%d indert at position %d\n",num,pos);
}
else
{
printf("invalid  position %d\n",pos);
}
}else
if(ch==4)
{
printf("Enter  the Position of the Number to remove : ");
scanf("%d",&pos);
fflush(stdin);
if(removeAt(pos)==-1)
{
printf("Element removed from position %d\n",pos);
}
else
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