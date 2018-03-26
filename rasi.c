#include<stdio.h>
#include<string.h>
void main()
{
int num,low,high,i,c=0,v=0;
scanf("%d %d %d",&num,&low,&high);
for(i=low;i<=high;i++)
{

    if(i==num)
        c++;
    else
        v++;
}
if(c==1)
    printf("yes\n");
else
    printf("no\n");
}
