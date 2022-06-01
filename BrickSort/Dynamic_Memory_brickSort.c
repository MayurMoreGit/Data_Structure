//Mayur More
//brickSort
#include<stdio.h>
#include<stdlib.h>
void brickSort(int *x,int size)
{
for(int i=0;i<size;i++)
{
int gg,f,found,e;
char g;
gg=size-2;
f=size-1;
found=1;
while(found==1)
{
found=0;
for(i=1;i<=gg;i+=2)
{
if(x[i+1]<x[i])
{
g=x[i+1];
x[i+1]=x[i];
x[i]=g;
found=1;
}
}
for(e=0;e<=f;e+=2)
{
if(x[e+1]<x[e])
{
g=x[e+1];
x[e+1]=x[e];
x[e]=g;
found=1;
}
}
}
}
}
int main ()
{
int *x,req,y;
printf("enter a requriment : ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requriment : ");
return 0;
}
x=(int *)malloc (sizeof(int) *req);
if(x==NULL)
{
printf("memory has not allocated to %d\n");
return 0;
}
for(y=0;y<=req;y++)
{
printf("enter  a number  : ");
scanf("%d",&x[y]);
}
brickSort(x,req);
for(y=0;y<=req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}
