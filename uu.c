#include<stdio.h>
void main()
{

    int a[100],i,n,min=0,max=0;
    printf("enter the n value:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {

        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<=n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    max=a[0];
    for(i=1;i<=n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }

    printf("min is %d\n",min);
    printf("max is %d\n",max);
    printf(" sum of minimum & maximum : %d",min+max);

}
