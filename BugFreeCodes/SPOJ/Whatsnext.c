/**

* http://www.spoj.com/problems/ACPC10A/
* @author - ROHITH RAJ R
* Created on Sat Jul 23 17:37:33 2016
* email - rohithraj.reganti@gmail.com

*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    while(1)
    {

        scanf("%d%d%d",&a,&b,&c);
        if(a==0&&b==0&&c==0) break;
        if(b-a==c-b){printf("AP %d\n",c+(c-b));}
        else{printf("GP %d\n",c*(c/b));}



    }



    return 0;
}
