#include<stdio.h>
#include<string.h>
void main()
{
char str[40],revstr[40]; int i;
scanf("%d",&str);

if(strrev(str)==str)
printf("yes\n");
else
printf("no\n");
}
