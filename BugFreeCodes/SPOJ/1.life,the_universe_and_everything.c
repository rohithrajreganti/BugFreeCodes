#include <stdio.h>

int main(void) {
	// your code here
	int num[100];
	int i=0;
    while(1)
    {

    	scanf("%d",&num[i]);
    	if(num[i]==42)break;
    	i+=1;
    }
    int n=i;
    for(i=0;i<n;i++)
    {printf("%d\n",num[i]);}
	return 0;
}