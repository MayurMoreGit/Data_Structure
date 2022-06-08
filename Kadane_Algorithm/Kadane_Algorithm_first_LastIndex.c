#include<stdio.h>
int main()
{
int x[8]={10,-2,3,7,-5,8,6,-2};
int local_max,global_max,i,j,si,ei;
local_max=x[0];
global_max=x[0];
si=0;
ei=0;
for(i=1;i<=7;i++)
{
j=local_max+x[i];
if(x[i]>j)
{
local_max=x[i];
si=i;
}
else
{
local_max=j;
}
if(local_max>global_max)
{
global_max=local_max;
ei=i;
}
}
printf("(%d ----%d)%d\n",si,ei,global_max);
return 0;
}