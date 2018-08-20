#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	long k;  cin>>k;
	vector<long long > a;
	for(int i=0;i<n;++i)
	{
		long x;  cin>>x; a.push_back(x);
	}
	sort(a.begin(),a.end());
	map<long long ,int> m;  int c=0;
	for(int i=0;i<n;++i)
	{
		if(m[a[i]]<1)
		 c++, m[a[i]*k]++;
	}
	cout<<c<<endl;
}
