#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	vector<long long int> a,b,c;
	map<long long int,int> m;
	map<long long int,int> o;
	map<long long int,int> p;
	for(int i=0;i<n;++i)
	{
		long long int x;   cin>>x;   a.push_back(x);  m[x]++;
	}
	for(int i=0;i<n-1;++i)
	{
		long long int x;   cin>>x;   b.push_back(x);  o[x]++;
	}
	map<long long int,int> r;
	for(int i=0;i<n;++i)
	{
		if(m[a[i]]!=o[a[i]]&&r[a[i]]<1)
		{
			cout<<a[i]<<endl;
			r[a[i]]++;
		}
	}	
	for(int i=0;i<n-2;++i)
	{
		long long int x;   cin>>x;   c.push_back(x);  p[x]++;
	}
	map<long long int,int> s;
	for(int i=0;i<n-1;++i)
	{
		if(o[b[i]]!=p[b[i]]&&s[b[i]]<1)
		{
			cout<<b[i]<<endl;
			s[b[i]]++;
		}
	}
}
