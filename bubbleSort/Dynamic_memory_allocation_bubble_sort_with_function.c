#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int *x,int size)
{
int m,e,f,g;
m=size-2;
while(m>=0)
{
e=0;
f=e+1;
while(e<=m)
{
if(*(x+f)< *(x+e))
{
g=*(x+e);
*(x+e)=*(x+f);
*(x+f)=g;
}
e++;
f++;
}
m--;
}
}
int main ()
{
int y;
int *x,req;
printf("enter a requirment : ");
scanf("%d",&req);
if(req<=0)
{
printf("invalid requirment : ");
return 0;
}
x=(int *)malloc (sizeof(int) *req);
if(x==NULL)
{
printf("memory has not allocated  %d\n  : ");
return 0;
}
for(y=0;y<req;y++)
{
printf("enter a number : ");
scanf("%d",&x[y]);
}
bubbleSort(x,req);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}
