/**

* http://www.spoj.com/problems/AE00/
* @author - ROHITH RAJ R
* Created on Sun Jul 24 11:36:39 2016
* email - rohithraj.reganti@gmail.com

*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int p=0;
    scanf("%ld",&p);

   long  int sum=0;
    sum=p;
    long int m,n;

    for(m=2;m<10000;m++)
    {
        for(n=m;n<10000;n++)
        {
            if(p>=(m*n))sum++;
                else break;
        }
    }
    printf("%ld",sum);




    return 0;
}
