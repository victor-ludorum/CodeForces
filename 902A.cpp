#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	int n,m;   cin>>n>>m;
	pair<int,int> a[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i].first>>a[i].second;
	}
	sort(a,a+n);
	int s=a[0].first,e=a[0].second;
	if(s!=0)
	{
		cout<<"NO"<<endl; return 0;
	}
	for(int i=1;i<n;++i)
	{
		if(a[i].first==e || (a[i].first<e && a[i].second>e))
		e = max(e,a[i].second);
	}
	if(e==m)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
