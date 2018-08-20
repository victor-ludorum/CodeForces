#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int n,k;   cin>>n>>k;
	int a[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	sort(a,a+n,greater<int>());
	for(int i=0;i<n;++i)
	{
		if(k%a[i]==0)
		{
			cout<<k/a[i]<<endl; return 0;
		}
	}
}
