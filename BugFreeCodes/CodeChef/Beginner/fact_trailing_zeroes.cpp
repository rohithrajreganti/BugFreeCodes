# include <iostream>
# include <cstdio>
# include <iomanip>
using namespace std;


int trail(int n)
{

	int cnt =0;
	for(int i=5;n/i !=0;i*=5){

		cnt+=n/i;
	}
	return cnt;


}




int main()

{

long long int n;
cin>>n;

while(n--){

long long int t;
cin>>t;

cout<<trail(t)<<endl;


}

return 0;
}
