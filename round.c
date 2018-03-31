#include<stdio.h>
void main()
{
float num = 2.6;
    int n = (int)(num < 0 ? (num - 0.5) : (num + 0.5));
    printf("%d\n", n);
}
