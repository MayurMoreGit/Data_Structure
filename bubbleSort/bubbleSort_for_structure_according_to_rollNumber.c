#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubbleSort(void *ptr,int cs,int es,int(*p2f)(void *,void *))
{
int e,f,m,w;
void *a,*b,*c;
c=(void *)malloc (es);
m=cs-2;
while(m>=0)
{
e=0;
f=e+1;
while(e<=m)
{
a=ptr+(f*es);
b=ptr+(e*es);
w=(p2f)(a,b);
if(w<0)
{
memcpy(c,(const void *)a,es);
memcpy(a,(const void *)b,es);
memcpy(b,(const void *)c,es);
}
e++;
f++;
}
m--;
}
}
struct student 
{
int rollnumber;
char name[21];
};
int studentcomparator(void *left,void *right)
{
struct student *s1,*s2;
s1=(struct student *)left;
s2=(struct student *)right;
return s1->rollnumber-s2->rollnumber;
}
int main ()
{
struct student *s,*j;
int y;
int req;
printf("enter  a requirment : ");
scanf("%d",&req);
if(req<0)
{
printf("invalid requirment : ");
return 0;
}
s=(struct student *)malloc (sizeof(struct student) *req);
j=s;
for(y=0;y<req;y++)
{
printf("enter a rollnumber : ");
scanf("%d",&(j->rollnumber));
printf("enter a name : ");
scanf("%s",&(j->name));
j++;
}
bubbleSort(s,req,sizeof(struct student),(studentcomparator));
for(y=0;y<req;y++)
{
printf("rollnumber %d,name %s\n",s[y].rollnumber,s[y].name);
}
return 0;
}
