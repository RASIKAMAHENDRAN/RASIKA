#include<stdio.h>
#include<string.h>
void main()
{
char str1[100],str2[100];
int c=0;
gets(str1);
gets(str2);
while(str1[i]!=str2[i])
{
if(str1[i]!=str2[i])
{
c++;
}
}
if(c==0)
{
printf("strings are equal");
}
else
{
printf("strings are not equal");
}
}
