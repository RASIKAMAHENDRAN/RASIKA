#include<stdio.h>
void main()
{

    int n,c,a,n1;
    float i;
    scanf("%d %d",&n,&a);
    n1=n*a;
    i=sqrt((double)n1);
    c=i;
    if(c==i)
    {

        printf("yes");
    }
    else
        printf("no");
}
