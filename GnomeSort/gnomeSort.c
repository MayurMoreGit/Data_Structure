//Mayur More
//GnomeSort

#include<stdio.h>
#include<stdlib.h>
void gnomeSort(int *x,int size)
{
int j,f;
int g;
f=size-1;
j=0;
while(j<=f)
{
while(j==0) j++;
if(x[j-1]<x[j])
{
j++;
}
else
{
g=x[j-1];
x[j-1]=x[j];
x[j]=g;
j--;
}
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
gnomeSort(x,req-1);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}