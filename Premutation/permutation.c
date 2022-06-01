#include<stdio.h>
#include<string.h>
void _printCombination(char *str,int start,int end)
{
int i;
int g;
if(start==end)
{
printf("%s\n",str);
return;
}
for(i=start;i<=end;i++)
{
g=str[start];
str[start]=str[i];
str[i]=g;
_printCombination(str,start+1,end);
g=str[start];
str[start]=str[i];
str[i]=g;
}
}
int main()
{
char arr[3];
strcpy(arr,"abcd");
_printCombination(arr,0,3);
return 0;
}
