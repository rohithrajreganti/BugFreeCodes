/**

* http://www.spoj.com/problems/CANDY/
* @author - ROHITH RAJ R
* Created on Sat Jul 23 17:37:33 2016
* email - rohithraj.reganti@gmail.com

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    while(1)
    {
        int n,i,sum=0,a[10000],max=0,avg=0;
    long int sumcan=0;

        scanf("%d",&n);
        if(n==-1)break;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];

        }


        if(sum%n!=0){printf("%d\n",-1);continue;}

        avg=sum/n;
        for(i=0;i<n;i++)
        {
            if(a[i]>avg){sumcan+=a[i]-avg;}
        }

                printf("%Ld\n",sumcan);






    }




    return 0;
}


