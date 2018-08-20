#include <bits/stdc++.h>
using namespace std;
	pair<int,int> a[100005];
bool sortinrev(const pair<int,int> &a, const pair<int,int> &b)
{
	return (a.first>b.first);
}
bool f[100005];
int main()
{
	int n;  cin>>n;
	memset(f,true,sizeof(f));

	for(int i=1;i<=n;++i)
	{
		cin>>a[i].first>>a[i].second;
	}
	sort(a+1,a+n+1);
	int s=0;
	for(int i=1;i<=n;++i)
	{
		if(f[i])
		{
		
		int j = a[i].first - a[i].second;
		if(m[j]>0)
		s++, f[m[j]/10] = false;
	    }
	}
	cout<<s<<endl;
}
