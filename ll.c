#include<stdio.h>
void main()
{

    int a[50],i,n,c=0,t=0,k,j;
     printf("enter the number");
    scanf("%d",&n);
  printf("enter the array");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {

            k=a[i]*a[i];

            printf("%d\n",k);
             t=t+k;
        }
        else
        {
              j=a[i]*a[i]*a[i];
             printf("%d\t",j);
            c=c+j;
        }
    }


        printf("%d\n",c+t);

}
