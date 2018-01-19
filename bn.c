#include<stdio.h>
#include<string.h>
void main()
{
    char s2[50];
    int i,c=0;
    printf("enter the string :");
    scanf("%[^n]s",s2);
    for(i=0;s2[i]!='\0';i++){
if(s2[i]==' ')
        {
            c++;
        }

}
 printf("no of words are :%d",c);
}






