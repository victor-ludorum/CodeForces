#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,m;   cin>>n>>m;
	vector<long> v,r;
	map<long long,long > ma;
	for(int i=0;i<n;++i)
	{
		long x;   cin>>x;  v.push_back(x); ma[x]++;
	}
	bool flag = true;
	long long i=1,c=0;
	while(flag)
	{
		while(ma[i]>=1)
		{
			i++;
		}
		m = m-i;
		if(m>=0)
		 c++, r.push_back(i);
		if( m<=0 || i>m )
		flag = false;
		i++;
	}
	cout<<c<<endl;
	for(int i=0;i<r.size();++i)
	  cout<<r[i]<<" ";
}
