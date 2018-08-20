#include<bits/stdc++.h>
using namespace std;
long long r[100005];
int main()
{
	int n;  cin>>n;
	vector<long int> v;
	for(int i=0;i<n;++i)
	{
		long int x;  cin>>x;  v.push_back(x);
	}
    long long m = v[n-1];
	for(int i=n-2;i>=0;--i)
	{
		if(m>=v[i])
		r[i] = (m-v[i] +1);
		else
		m = v[i];
	}
	for(int i=0;i<n;++i)
	{
		cout<<r[i]<<" ";
	}
}
