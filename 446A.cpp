#include <bits/stdc++.h>
using namespace std;
int a[100005],d[100005],r[100005];
int main()
{
	int n;  cin>>n;
	for(int i=1;i<=n;++i)
	   cin>>a[i]; 
	   int m =1;  a[n+1] = INT_MAX;
	for(int i=1;i<=n;++i)
	{
		if(a[i]>a[i-1])
		d[i] = d[i-1]+1;
		else
		d[i] = 1;
		m = max(m,d[i]);
	}
	if(m<n)
	++m;
	for(int i=n;i>=1;--i)
	{
		if(a[i]<a[i+1])
		r[i] = r[i+1] + 1;
		else
		r[i] =1;
		if(a[i-1]+1<a[i+1])
		m = max(m,d[i-1]+1+r[i+1]);
	}
	cout<<m<<endl;
}
