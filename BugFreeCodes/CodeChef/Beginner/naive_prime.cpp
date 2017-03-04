# include <iostream>

using namespace std;


int fibo(int n)
{

return(	(n==0 || n==1)?((n==0) ? 0:1): fibo(n-1) + fibo(n-2));


}



int main()

{

for(int i=1;i<=10;i++)

cout<<fibo(i-1)<<" ";


return 0; 
}
