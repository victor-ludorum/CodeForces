#include <bits/stdc++.h>
using namespace std;
long long a[200005],d[200005],b[200005],c[200005];
long long n,m,k,x,s;
inline long long solve(long long ml)
{
	long long l=0,r=k;
	while(l<r)
	{
		long long mid = (l+r+1)/2;
		if(d[mid]>ml) r = mid-1;
		else l = mid;
	}
	return c[l];
}
int main()
{
    cin>>n>>m>>k>>x>>s;
	long long r = 1ll*x*n;
	a[0] = x;
	for(int i=1;i<=m;++i)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;++i)
	{
		cin>>b[i];
	}
	for(int i=1;i<=k;++i)
	{
		cin>>c[i];
	}
	for(int i=1;i<=k;++i)
	{
		cin>>d[i];
	}
	for(int i=0;i<=m;++i)
	{
		long long ml = s - b[i];
		if(ml<0) continue;
	    r = min(r,1ll*(n-solve(ml))*a[i]);	
	}
	cout<<r<<endl;
}
