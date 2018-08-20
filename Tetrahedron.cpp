#include <bits/stdc++.h>
using namespace std;
int main()
{
	long int n;  cin>>n;
	if(n==2||n==3)
	{
		cout<<n<<endl;
	}
	else
	{
		long int r = ((n+3)*(n+2))/2;
		cout<<r<<endl;
	}
}
