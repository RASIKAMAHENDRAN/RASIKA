#include<stdio.h>
void main()
{
int l,u,i,count=0;
scanf("%d %d",&l,&u);
for(i=l;i<=u;i++)
{
if(l%i==0)
{
count++;
}
}
if(count==2)
{
printf("%d",i);
}
}

