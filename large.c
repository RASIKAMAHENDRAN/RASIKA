#include<stdio.h>
void main()
{
int n1,n2,n3;
scanf("%d %d %d",&n1,&n2,&n3);
if((n1>n2)&&(n1>n3))
{
printf("%d is large",n1);
}
else if((n2>n3)&&(n2>n1))
{
printf("%d is large",n2);
}
else{
printf("%d is large",n3);
}
}
