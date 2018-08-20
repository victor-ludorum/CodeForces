#include<bits/stdc++.h>
using namespace std;
pair<long long, long long> p[300005];
long long a[300005];
int main()
{
	int n,d=0;  cin>>n;
	for(int i=0;i<n;++i)
	{
		cin>>p[i].first;
		p[i].second = i;
	}
	sort(p,p+n);
	for(int i=0;i<n;++i)
	{
		if(p[i].first>d) 
		  d = p[i].first;
		  a[p[i].second] = d;
        d++;
	}
	for(int i=0;i<n;++i)
	 cout<<a[i]<<" ";
}
