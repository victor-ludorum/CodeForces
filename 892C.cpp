#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
int main()
{
	int n;  cin>>n;
	int c=0;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		if(a[i]==1)
		c++;
	}
	long long g = a[0];
	
	for(int i=1;i<n;++i)
	{
		g = __gcd(g,a[i]);
	}
	if(g!=1)
	{
		cout<<"-1"<<endl; return 0;
	}
	
	if(c>0)
	{
		cout<<n-c<<endl; return 0;
	}
	int mx = INT_MAX;
	for(int i=0;i<n-1;++i)
	{
		long long h = a[i];
		for(int j=i+1;j<n;++j)
		{
			h = __gcd(h,a[j]);
			if(h==1)
			{
				mx = min(mx,j-i);
			}
		}
	}
	
	cout<<mx+n-1<<endl;
}
