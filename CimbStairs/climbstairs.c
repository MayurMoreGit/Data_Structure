#include<stdio.h>
int getNumberOfwaysClimbStairs(int stairs)
{
int e,f,k,g;
//if(stairs<=2) return stairs;
e=1;
f=1;
k=1;
while(k<=stairs)
{
f=f+e;
e=f-e;
k++;
}
return f;
}
int main ()
{
for(int j=0;j<10;j++)
{
printf("%d\n",getNumberOfwaysClimbStairs(j));
}
return 0;
}