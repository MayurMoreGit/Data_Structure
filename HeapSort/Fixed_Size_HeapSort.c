#include<stdio.h>
int main ()
{
int x[10],lb,ub,y,ri,ci,lci,rci,g,swi;
lb=0;
ub=9;

//Following is the data entery logic
for(y=lb;y<=ub;y++)
{
printf("enter  a number : ");
scanf("%d",&x[y]);
}

//Following logic will convert the contents of the array to a max heap
y=lb+1;
while(y<=ub)
{
//consider that the array is from (lb to y) index
ci=y;
while(ci>lb)
{
ri=(ci-1)/2;
if(x[ci]>x[ri])
{
g=x[ci];
x[ci]=x[ri];
x[ri]=g;
ci=ri;
}
else
{
break;
}
}

//arrat from (lb to y) index has been converted to max heap
y++;
}

//logic to implement heap sort
while(ub>lb)
{
//swap data located on ub &lb index
g=x[lb];
x[lb]=x[ub];
x[ub]=g;
ub--;

//logic to adjust heap
ri=lb;
while(ri<ub)
{
lci=(ri*2)+1;
if(lci>ub) break;
rci=lci+1;
if(rci>ub) 
{
swi=lci;
}
else
{
if(x[lci]>x[rci])
{
swi=lci;
}
else
{
swi=rci;
}
}
if(x[swi]>x[ri])
{
g=x[swi];
x[swi]=x[ri];
x[ri]=g;
ri=swi;
}
else
{
break;
}
}
}
//logic to implement to sorted array
ub=9;
lb=0;
for(y=lb;y<=ub;y++)
{
printf("%d\n",x[y]);
}
return 0;
}
