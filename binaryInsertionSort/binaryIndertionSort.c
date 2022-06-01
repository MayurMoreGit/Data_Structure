//Mayur more
//binaryInsertionSort

#include<stdio.h>
#include<stdlib.h>
void binaryInsertionSort(int *x,int size)
{
for(int i=1;i<=size;i++)
{
int si,ei,num,mid,j;
si=0;
ei=i-1;
mid=0;
num=x[i];
while(si<=ei)
{
mid=si+(ei-si)/2;
if(x[mid]==num) break;
if(num<x[mid])
{
ei=mid-1;
}
else
{
si=mid+1;
}
}
for(j=i;j>si;j--)
{
x[j]=x[j-1];
}
x[si]=num;
}
}
 

int main ()
{
int *x,y,req;
printf("enter a requeriment : ");
scanf("%d",&req);
if(req<=0)
{
printf("Invalid requeriment");
return 0;
}
x=(int *)malloc (sizeof(int)*req);
for(y=0;y<req;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
}
binaryInsertionSort(x,req-1);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}
