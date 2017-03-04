# include <iostream>
# include <algorithm>
# include <iomanip>
# include <vector>
# include <utility>
using namespace std;
int main()
{

int test;
std::cin>>test;

std::vector<int> v(test);

for(int i=0;i<test;i++)
{

std::cin>>v[i];
}

std::sort(v.begin(),v.end());

for(int i=0;i<test;i++)
{

std::cout<<v[i]<<endl;
}


return 0;
}
