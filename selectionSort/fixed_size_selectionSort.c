#include<stdio.h>
#include<stdlib.h>
int main ()
{
int x[5],e,f,g,m,y;
y=0;
while(y<=4)
{
printf("enter a number : ");
scanf("%d",&x[y]);
y++;
}
e=0;
while(e<=3)
{
f=e+1;
m=e ;
while(f<=4)
{
if(x[f]<x[m])
{
m=f;
}
f++;
}
g=x[e];
x[e]=x[m];
x[m]=g;
e++;
}
y=0;
while(y<=4)
{
printf("%d\n",x[y]);
y++;
}
return 0;
}
