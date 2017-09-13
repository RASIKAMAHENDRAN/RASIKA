#include<stdio.h>
void main()
{
int i,j,s=0,s2=0;
for(i=1;i<=15;i++)
{
s=s+i;
}
printf("%d",s);
for(j=15;j<=45;j++)
{
if(j%2!=0)
{
s2=s2+j;
}
}
printf("%d",s2);
}
