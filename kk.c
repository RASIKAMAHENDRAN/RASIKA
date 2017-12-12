#include<stdio.h>
#include<stdbool.h>
void main()
{

    char a[50];
    int i;
    bool x=true;
    bool y=false;



    printf("enter the string:");
    scanf("%s",&a);
    if((a[0]>=0)&&(a[0]<=9))
    {

        printf("true");
    }
    else
    {

        printf("false");
    }
}
