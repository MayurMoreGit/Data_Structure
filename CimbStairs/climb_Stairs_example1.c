#include<stdio.h>
int getNumberOfWaysClimbStairs(int stairs)
{
int e,f,g,k;
if(stairs<=2) return stairs;
e=1;
f=2;
k=3;
while(k<=stairs)
{
g=e+f;
e=f;
f=g;
k++;
}
return g;
}
int main ()
{
for(int e=0;e<10;e++) printf("%d\n",getNumberOfWaysClimbStairs(e));
return 0;
}
