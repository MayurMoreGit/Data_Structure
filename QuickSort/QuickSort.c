#include<stdio.h>
int main()
{
int x[10],y,req;
int e,f,g,pp,lb,ub;
int stack1[10],stack2[10],top;
for(y=0;y<=req;y++)
{
printf("enter a number : ");
scanf("%d",&x[y]);
}
lb=0;
ub=9;
top=10;
top--;
stack1[top]=lb;
stack2[top]=ub;
while(top!=10)
{
lb=stack1[top];
ub=stack2[top];
top++;
e=lb;
f=ub;
while(e<f)
{
while(e<ub && x[e]<=x[lb])
{
e++;
}
while(x[f]>x[lb])
{
f--;
}
if(e<f)
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
else
{
g=x[lb];
x[lb]=x[f];
x[f]=g;
}
}
pp=f;
if(pp+1<ub)
{
top--;
stack1[top]=pp+1;
stack2[top]=ub;
}
if(lb<pp-1)
{
top--;
stack1[top]=lb;
stack2[top]=pp-1;
}
}
y=0;
while(y<=9)
{
printf("%d\n",x[y]);
y++;
}
return 0;
}
