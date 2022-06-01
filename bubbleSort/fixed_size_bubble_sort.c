#include<stdio.h>
int main()
{
int x[10],e,f,g,m,y;
y=0;
while(y<=9)
{
printf("Enter a Number  ");
scanf("%d",&x[y]);
y++;
}
m=8;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(x[e]>=x[f])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
e++;
f++;
}
m--;
}

for(y=0;y<=9;y++)
{
printf("%d\n",x[y]);
}
return 0;
}