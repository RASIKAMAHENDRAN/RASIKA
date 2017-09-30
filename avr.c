#include<stdio.h>
void main()
{
int a[50], n, big=0,small=0;
scanf("%d",&n);
for(i=0;i<=n;i++);
{
scanf("%d",&a[i]);
}
big=small=a[0];
for(i=1;i<=n;i++)
{
if(a[i]>big)
{
big=a[i];
}
if(a[i]<small)
{
small=a[i];
}
printf("%d %d",big,small);
}
}
