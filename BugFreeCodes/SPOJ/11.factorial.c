#include<stdio.h>
#include<stdlib.h>

long trailing(long  n)
{
    // Initialize result
    long count = 0;
    long i;

    // Keep dividing n by powers of 5 and update count
    for ( i=5; n/i>=1; i *= 5)
          count += n/i;

    return count;
}

int main()
{
    long testcases;
    scanf("%Ld",&testcases);
    long i,a[100000];
    long b[100000];

    for (i=0;i<testcases;i++)
    {
        scanf("%ld",&a[i]);
        b[i]=trailing(a[i]);


    }



    for (i=0;i<testcases;i++)
    {
        printf("%ld\n",b[i]);

    }



    return 0;
}


