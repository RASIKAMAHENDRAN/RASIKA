#include<stdio.h>
void main()
{
int n,i,j;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=10;j++)
{
printf("\n");
printf("%d * %d=%d",i,j,i*j);
}
}
}
