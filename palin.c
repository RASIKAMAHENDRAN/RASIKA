#include<stdio.h>
void main()
{
int n,r=0;
scanf("%d",&n);
s=n;
while(n>0)
{
a=n%10;
r=r*10+a;
n=n/10;
}
if(r==s)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
}
