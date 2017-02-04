/*

"""
Author - Rohith Raj R
email - rohithrajreganti@gmail.com
Date - 2/02/2017
Problem CODE - TOANDFRO
SPOJ

"""


*/


# include <stdio.h>
# include <stdlib.h>
# include <string.h>


int main()
{

while(1)

{

int col;
 scanf("%d",&col);
if(col==0) break;


char str[300];
scanf("%s",str);

int rows=strlen(str)/col;
int ans[rows][col];
int i,j,k=0;
for(i=0;i<rows;i++)
{

if(i%2)
{

for(j=col-1;j>=0;j--)
{

ans[i][j]=str[k++];
}


}

else
{

for(j=0;j<col;j++)

{


ans[i][j]=str[k++];

}

}


}

for(i=0;i<col;i++)
for(j=0;j<rows;j++)
printf("%c",ans[j][i]);





}



return 0 ;
}
