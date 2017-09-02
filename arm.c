#include<stdio.h>
{
int n,s=0;
scanf("%d",&n);
b=n;
while(n>0)
{
a=n%10;
s=s+(a*a*a);
n=n/10;
}
if(s==b)
{
printf("armstrong number");
}
else
{
printf("not armstrong number");
}
}
