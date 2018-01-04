#include<stdio.h>
void main()
{

    char a[50],c[50];
    int i,n;
    scanf("%s",&a);
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c[i]=a[i];


    }
    c[i]='\0';
    printf("%s",c);

}
