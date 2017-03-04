# include <iostream>
# include <algorithm>
# include <cstdio>
using namespace std;

int main()
{

	long long int n,k;

	scanf("%lld %lld",&n,&k);
	long long int cnt=0;
	while(n--)
	{

		long long int b;
		scanf("%lld",&b);
		if(b%k == 0) 			
			{				
			cnt++;
	
			}		

	}
	printf("%lld",cnt);


return 0;
}
