#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n+1];
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	
	int g=a[0]; bool flag = true;
	for(int i=1;i<n;++i)
	{
		g = __gcd(g,a[i]);
	}
	
	if(g!=a[0])
	{
		cout<<"-1"<<endl; return 0;
	}
	
	for(int i=0;i<n-1;++i)
	{
		int h = __gcd(a[i],a[i+1]);
	//	cout<<h<<endl;
		if(h!=a[i] && h!=a[i+1])
		{
			if(m[h]>0)
			m[h]--;
		}
	}
	
	vector<int> v;
	for(int i=0;i<n;++i)
	{
		if(m[a[i]]>0)
		v.push_back(a[i]);
	}
	
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();++i)
	cout<<v[i]<<" ";
}
