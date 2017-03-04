# include <iostream>
# include <cstdio>
# include <vector>
# include <algorithm>
using namespace std;


int main()
{

int test;
cin>>test;
vector<int> v;
while(test--)
{

int num;
cin>>num;

for(int i=1;i<num;i++){
	v.push_back(num%i);
}

int max=*std::max_element(v.begin(),v.end());
cout<<max;
v.clear();






}


return 0;
}
