
/**

* problem id - 3410
* page url - http://www.spoj.com/problems/SAMER08F/
* Author : Rohith Raj R
* Date : 22-07-2016

*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    long int num=0;
    long int exp=0;
    while(1)
    {
        scanf("%ld",&num);
        if(num==0)break;
        else
            {
                exp=((num)*(num+1)*(2*num+1))/6;

                printf("%ld\n",exp);
            }
    }


    return 0;
}
