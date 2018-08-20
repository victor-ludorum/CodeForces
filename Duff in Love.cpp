#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i=2;  cin>>n;
	for(;i<=sqrt(n);++i)
	{
		if(n%(i*i)==0)
		{
		n = n / i; i=1;
	    }
	}
	cout<<n<<endl;
}
