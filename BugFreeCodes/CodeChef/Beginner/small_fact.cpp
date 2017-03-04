# include <cstdio>
# include <iostream>
# include <iomanip>


long long int fact(long long int n)
{

if(n==0 || n==1) return 1;
else return n*fact(n-1);
}



using namespace std;

int main()

{

int n;
cin>>n;

while(n--)

{

int num ;

cin>>num;

cout<<fact(num)<<endl;

}

return 0;
}
