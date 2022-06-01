//Mayur more
//StoogeSort

#include<stdio.h>
#include<stdlib.h>
void StoogeSort(int *x, int lb, int ub)
{
int g;
int f;
if (x[lb] > x[ub])
{
 g = x[lb];
x[lb] = x[ub];
x[ub] = g;
}
if ((lb + 1) >= ub)
{
return;
}
f = (int)((ub-lb+1)/3);
StoogeSort(x,lb,ub-f);
StoogeSort(x,lb+ f,ub );
StoogeSort(x,lb,ub-f);
}
void Sort(int *arr,int size)
{
for(int i=0;i<=size;i++)
{
StoogeSort(arr,0,size);
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
Sort(x,req-1);
for(y=0;y<req;y++)
{
printf("%d\n",x[y]);
}
free(x);
return 0;
}

