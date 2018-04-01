 #include<stdio.h>
#include<math.h>
void main()
{

int num=2143,i,c=0,v=0,pow=1,a[i],digit,pow2=10000,b[i];

while(num/pow)
{

    digit=(num/pow)%10;
    if(digit%2!=0)
    {



    
        c++;
        a[i]=digit;  
    }
    i++;
    pow=pow*10;
    
}
for(i=0;i<=c;i++)
{
if(a[i]!=0)
b[i]=a[i];
//printf("%d",a[i]);
}
for(i=c;i>=0;i--)
{
if(a[i]!=0)

printf("%d",b[i]);
}


}
