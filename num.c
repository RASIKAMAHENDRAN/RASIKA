#include<stdio.h>
#include<math.h>
void main()
{

int num,i,c=0,v=0;
scanf("%d",&num);
for(i=1;i<=num;i++)
{

    if(num%i==0)
    {
        c++;
    }
    else
        v++;
}
if(c>2)
    printf("yes");
else
    printf("no");
}
