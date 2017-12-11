#include<stdio.h>
void main()
{
int a,b,*p1,*p2;
scanf("%d %d ",&a,&b);
p1=&a;
p2=&b;
printf("add is :",(*p1+*p2));
}
