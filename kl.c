#include<stdio.h>
int isMultipleof5 (int n)
{
    while ( n > 0 )
        n = n - 10;
    if ( n == 0 )
        return 1;
else
    return 0;
}

/* Driver program to test above function */
int main()
{
    int n = 5;
    if ( isMultipleof5(n) == 1 )
        printf("%d is multiple of 10\n", n);
    else
        printf("%d is not a multiple of 10\n", n);

    return 0;
}
