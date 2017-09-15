#include<stdio.h>
void main()
{
int a,b;
scanf("%d %d ",&a &b);
printf("number befor swapping %d %d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("number after swapping %d %",a b);
}
