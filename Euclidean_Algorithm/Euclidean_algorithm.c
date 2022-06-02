#include<stdio.h>
int Euclidean(int p,int q)
{
int e;
while(q!=0)
{
e=p%q;
p=q;
q=e;
}
return p;
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