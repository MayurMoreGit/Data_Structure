#include<stdio.h>
int Euclidean(int p,int q)
{
if( q==0)
{
return p;
}
else
{
return Euclidean(q,p%q);
}
}
int main ()
{
int p,q,e;
printf("Enter a Number : ");
scanf("%d",&p);
printf("Enter a another Number : ");
scanf("%d",&q);
e=Euclidean(p,q);
printf("%d\n",e);
return 0;
}