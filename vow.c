#include<stdio.h>
void main()
{

    char a[50];
    int i,c=0,v=0;
    scanf("%s",&a);

    for(i=0;i<=strlen(a);i++)
    {

        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            c++;
        }
        else{
            v++;
        }
    }
    if(c>0)
    {
        printf("yes");
    }
    else{
        printf("no");
    }
}
