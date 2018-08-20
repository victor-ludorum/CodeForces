#include <bits/stdc++.h>
using  namespace std;
long long c[100005],d[100005];
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	int n; long long M;   cin>>n>>M;
	long long a[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	
	long long r=0;
	for(int i=0;i<n;++i)
	{
		if(i==0)
		c[i] = c[i-1] + a[i];
		else if(i%2==0)
		c[i] = c[i-1] + a[i]- a[i-1], d[i]=d[i-1];
		else
		d[i] = d[i-1] + a[i] - a[i-1], c[i] = c[i-1];
	}
	if((n-1)%2!=0)
	c[n] = c[n-1] + M - a[n-1];
	
	for(int i=0;i<n;++i)
	cout<<c[i]<<" "<<d[i]<<endl;
	for(int i=0;i<n;++i)
	{
		if((a[i]-1)!=0)
		{
			r = max(r,c[i]-1+d[n-1]-d[i]);
		}
		if(a[i]+1<a[n-1])
		{
			r = max(r,c[i]+d[n-1] - d[i]-1);
		}
	}
	cout<<r<<endl;
}
