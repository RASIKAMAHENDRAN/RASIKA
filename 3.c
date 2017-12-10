#include<stdio.h>
void main()
{

int a[10],b[10],c[10],i,n;
scanf("%d",&n);
printf("enter the first array:");
for(i=0;i<=n;i++){
scanf("%d",&a[i]);
}
printf("enter the second array :");
for(i=0;i<=n;i++)
{
scanf("%d",&b[i]);
}
add(a,b,c);
}

void add(int n1[],int n2[],int n3[])
{
    int i,n;

for(i=0;i<=2;i++)
{
n3[i]=n1[i]+n2[i];
}
printf("resultant array :");
for(i=0;i<=2;i++)
{
printf("%d\t",n3[i]);
}
}


