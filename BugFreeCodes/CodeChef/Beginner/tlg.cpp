# include <iostream>
# include <cstdio>
# include <algorithm>
# include <vector>
using namespace std;

int main()
{

int test;
cin>>test;
vector<int> v1,v2;
while(test--)

{

	int num,num2;
	cin>>num>>num2;
	if((num-num2)>0) v1.push_back(num-num2);
	else v2.push_back(num2-num);
	

}

int max1=*std::max_element(v1.begin(),v1.end());
int max2=*std::max_element(v2.begin(),v2.end());
max1>max2?cout<<1<<" "<<max1:cout<<2<<" "<<max2;









return 0;

}
