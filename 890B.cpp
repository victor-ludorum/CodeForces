#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	int n;   cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	reverse(a,a+n);
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		if(m[a[i]]<1)
		{
			m[a[i]] = i+1;
		}
	}
	
	int mx = -1;
	for(int i=0;i<n;++i)
	{
		mx = max(mx,m[a[i]]);
	}
	
	cout<<a[mx-1]<<endl;
}
