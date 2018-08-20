#include <bits/stdc++.h>
using namespace std;
long long f(long long a)
{
       if(a==0)
	   return 0;
	   else if(a%2==0)
	   return f(a/2);
	   else
	   return f((a-1)/2) + 1;
}
int main()
{
	long long n,r=0;   cin>>n;
	map<long long,long long> p,m;
	vector<long long> v;
	for(long long i=1;i<=n;++i)
	{
		long long x;   cin>>x;
		p[f(x)]++;
		if(m[f(x)]<1)
		m[f(x)]++,v.push_back(f(x));
	}
	for(int i=0;i<v.size();++i)
	{
		r = r + ( p[v[i]] * (p[v[i]] - 1))/2;
	}
	cout<<r<<endl;
}
