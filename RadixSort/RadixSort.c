#include<stdio.h>
int main()
{
int x[10];
int queue[10][10],front[10],rear[10];
int y,num,e,f,i,j,largest,dc,digit;
y=0;
while(y<=9)
{
front[y]=0;
rear[y]=0;
y++;
}
y=0;
while(y<=9)
{
printf("Invalid Input  the conents cannot be Negative");
return 0;
}
y++;
largest=x[10];
y=1;
 while(y<=9)
{
if(x[y]>largest)
{
largest=x[y];
}
y++;
}
num=largest;
dc=1;
while(num>9)
{
num=num/10;
dc++;
}
e=0;
f=1;
y=1;
while(y<=dc)
{
//logic to sperad element in queue on the basis of digit at a position
i=0;
while(y<=9)
{
num=x[i];
digit=(num%e)/f;
queue[digit][rear[digit]]=num;
rear[digit]++;
i++;
}
//logic  to gather elements from queue and put then back in array that is to be sorted
j=0;
i=0;
while(i<=9)
{
while(rear[i]!=0)
{
num=queue[i],front[i];
front[i]++;
x[j]=num;
j++;
if(front[i]==rear[i])
{
front[i]=0;
rear[i]=0;
}
}
i++;
}
e=e*10;
f=f*10;
y++;
}
y=0;
while(y<=9)
{
printf("%d\n",x[y]);
y++;
}
return 0;
}