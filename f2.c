#include<stdio.h>
void main()
{
int a1=0,a2=1,a3;
scanf("%d",&a3);
while(a3>0)
{
a3=a1+a2;
a2=a3;
a1=a2;
}
printf("%d",a3);
}
