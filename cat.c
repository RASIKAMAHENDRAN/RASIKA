#include<stdio.h>
#include<string.h>
void main()
{
char s1[50],s2[50];
int i,j;
gets(s1);
gets(s2);
while(s1[i]!='\0')
i++;
while(s2[i]!='\0')
{
s1[i]=s2[j];
j++;
i++;
}
s1[i]='\0';
printf("string is %s",str1);
}
