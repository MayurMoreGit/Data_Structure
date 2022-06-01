//Mayur More
//pancakeSort

#include<stdio.h>
#include<stdlib.h>
void pancakeSort(int *x,int  size)
{
int largestIndex;
int y,a,b,i,e,f;
char g;
int lastIndex,Index;
f=size-1;
for(y=0;y<=f;y++)
{
for(lastIndex=f;lastIndex>=1;lastIndex--)
{
largestIndex=0;
for(i=1;i<=lastIndex;i++)
{
if(x[i]>x[largestIndex])
{
largestIndex=i;
}
}
if(largestIndex!=lastIndex)
{
e=0;
f=largestIndex;
g=x[e];
x[e]=x[f];
x[f]=g;
e++;
f--;
a=0;
b=lastIndex;
g=x[a];
x[a]=x[b];
x[b]=g;
a++;
b--;
}
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
printf("Invalid requeriment\n");
return 0;
}
x=(int *)malloc (sizeof(int)*req);
if(x==NULL)
{
printf("unable to allocated a memory for %d number \n",req);
return 0;
}
for(y=0;y<req;y++)
{
printf("Enter a number : ");
scanf("%d",&x[y]);
}
pancakeSort(x,req);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}
