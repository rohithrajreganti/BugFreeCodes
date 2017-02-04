#include<stdio.h>
#include<stdlib.h>

long fact(long n)
{
    if (n==1 || n==0){return 1;}
    else {return n*fact(n-1);}
}

int main()
{
    int i;
    unsigned long int a[150];
    unsigned long int b[150];
    unsigned long int tc;
   if(scanf("%Lu",&tc)<1){exit(0);}

   for (i=0;i<tc;i++)
   {
       scanf("%u",&a[i]);
       b[i]=fact(a[i]);
   }


   for (i=0;i<tc;i++)
   {
       printf("%u\n",b[i]);

   }







    return 0;
}


