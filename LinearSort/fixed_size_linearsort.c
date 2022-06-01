#include<stdio.h>
#include<stdlib.h>
int main ()
{
int *x,e,f,g,y,req;
printf("enter a requirment : ");
scanf("%d",&req);
if(req<=0)
{
printf("invalid requirment : ");
return 0;
}
x=(int *)malloc (sizeof(int)*req);
y=0;
while(y<=req)
{
printf("enter a number : ");
scanf("%d",&x[y]);
y++;
}
e=0;
while(e<=8)
{
f=e+1;
while(f<=9)
{
if(x[f]<=x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
f++;
}
e++;
}
y=0;
while(y<=req)
{
printf("%d\n",x[y]);
y++;
}
return 0;
}