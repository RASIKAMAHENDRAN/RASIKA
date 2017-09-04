#include<stdio.h>
void main()
{
int n1=0,n2=1,n3;
scanf("%d",&n3);
while(n3>0)
{
n3=n1+n2;
n2=n3;
n1=n2;
}
printf("%d",n3);
}
