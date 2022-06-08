#include<stdio.h>
int main()
{
int x[8]={10,-2,3,7,-5,8,6,-2};
int local_max,global_max,i,j;
local_max=x[0];
global_max=x[0];
for(i=1;i<=7;i++)
{
j=local_max+x[i];
local_max=(x[i]>j)?x[i]:j;
global_max=(local_max>global_max)?local_max:global_max;
}
printf("%d\n",global_max);
return 0;
}