#include<stdio.h>
int main ()
{
int A[2][2]={{1,2},{3,4}};
int B[2][2]={{10,20},{30,40}};
int C[2][2];
int D[2][2];
int i,j,k,l,m,n,o,p;
int m1,m2,m3,m4,m5,m6,m7;
i=A[0][0];
j=A[0][1];
k=A[1][0];
l=A[1][1];
m=B[0][0];
n=B[0][1];
o=B[1][0];
p=B[1][1];
m1=i*(n-p);
m2=(i+j)*p;
m3=(k+l)*m;
m4=l*(o-m);
m5=(i+l)*(m+p);
m6=(j-l)*(o+p);
m7=(i-k)*(m+n);
D[0][0]=m5+m4-m2+m6;
D[0][1]=m1+m2;
D[1][0]=m3+m4;
D[1][1]=m1+m5-m3-m7;
int num,e,f,g;
for(e=0;e<=1;e++)
{
for(f=0;f<=1;f++)
{
num=0;
for(g=0;g<=1;g++)
{
num=num+(A[e][g]*B[g][f]);
}
C[e][f]=num;
}
}
printf("     ");
for(e=0;e<=1;e++) printf("%5d",e);
printf("\n");
for(e=0;e<=1;e++)
{
printf("%5d",e);
for(f=0;f<=1;f++)
{
printf("%5d",C[e][f]);
}
printf("\n");
}
 
printf("\n\n");
printf("     ");
for(e=0;e<=1;e++) printf("%5d",e);
printf("\n");
for(e=0;e<=1;e++)
{
printf("%5d",e);
for(f=0;f<=1;f++)
{
printf("%5d",D[e][f]);
}
printf("\n");
}
 
return 0;
}
