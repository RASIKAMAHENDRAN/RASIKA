#include<stdio.h>
void main()
{
int n1,n2,t;
scanf("%d %d",&n1,&n2);
printf("before swap %d %d",n1,n2);
t=n1;
n1=n2;
n2=t;
printf("after swap %d %d",n1,n2);
}
