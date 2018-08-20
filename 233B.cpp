#include <bits/stdc++.h>
using namespace std;
long long s(long long x)
{
	long long r=0;
	while(x!=0)
	{
	r = r + x%10;
	x = x /10;
    }
    return r;
}
int main()
{
	long long n;   cin>>n;
	
	for(long long x = sqrt(n);x*x + 90*x>=n;--x)
	{
		if(x*x + s(x)*x==n)
		{
			cout<<x<<endl;   return 0;
		}
	}
	cout<<"-1"<<endl;
}
