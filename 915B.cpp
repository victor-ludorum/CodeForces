#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,p,l,r;  cin>>n>>p>>l>>r;
	if(l==1 && r==n)
	{
		cout<<"0"<<endl;
	}
	else if(l==1)
	{
		long long d = abs(p-r);
		cout<<d+1<<endl;
	}
	else if(r==n)
	{
		long long d = abs(p-l);
		cout<<d+1<<endl;		
	}
	else
	{
		long long d = min(abs(p-r),abs(p-l));
		d = d + abs(l-r);
		cout<<d+2<<endl;		
	}
}
