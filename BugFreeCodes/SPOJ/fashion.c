/**

* http://www.spoj.com/problems/TOANDFRO/
* @author - ROHITH RAJ R
* Created on Sun Jul 24 11:36:39 2016
* email - rohithraj.reganti@gmail.com

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int men[1000]={0},women[1000]={0},sum=0,col;
        int i,j;
        scanf("%d",&col);
        for(i=0;i<col;i++)scanf("%d",&men[i]);
        for(i=0;i<col;i++)scanf("%d",&women[i]);

        for(i=0;i<col;i++)
        {
            for(j=0;j<col-i-1;j++)
            {
                if(men[j]>men[j+1])
                {
                    int temp;
                    temp=men[j];
                    men[j]=men[j+1];
                    men[j+1]=temp;
                }
            }
        }

        for(i=0;i<col;i++)
        {
            for(j=0;j<col-i-1;j++)
            {
                if(women[j]>women[j+1])
                {
                    int temp;
                    temp=women[j];
                    women[j]=women[j+1];
                    women[j+1]=temp;
                }
            }
        }

        for(i=0;i<col;i++)
        {
            sum+=men[i]*women[i];
        }
        printf("%d\n",sum);






    }





    return 0;
}
