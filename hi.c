#include<stdio.h>
#include<math.h>
void main()
{

    int i,n,c;
    scanf("%d",&n);
    for(c=1;c<=n;c++)
    {
        if(n%c==0)
        {
           printf("%d ",c);

        }

    }

}
