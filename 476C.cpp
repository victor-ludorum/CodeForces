#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
int main()
{
	long long a,b;    cin>>a>>b;
	long long s =a;
	a = ((a*(a+1))/2)%mod;
	a = (a*b)%mod;
	a = (a+s)%mod;
	b = ((b*(b-1))/2)%mod;
	a = (a*b)%mod;
	cout<<a<<endl;
}
