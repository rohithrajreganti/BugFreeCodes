# include<stdio.h>
# include<stdlib.h>
int main()
{
    int a,i,j,num1,num2;
    int cases;
    scanf("%d",&cases);

     unsigned int array[10000][2];
    for(i=0;i<cases;i++)
    {for(j=0;j<2;j++)
    {scanf("%u",&array[i][j]) ;}
    }

   int p;
   for(i=0;i<cases;i++)
   {
       num1=array[i][0];
       num2=array[i][1];

       int finalval=reverser(reverser(num1)+reverser(num2));
       printf("%d\n",finalval);

    }





    return 0;
}

int reverser(int num)
{
int rem=0,rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    return rev;
}
