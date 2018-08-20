#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;   cin>>n>>k;
	vector<long> v;
	for(int i=0;i<n;++i)
	{
		long x;  cin>>x;  v.push_back(x);
	}
	sort(v.begin(),v.end());
	if(k>n)
	cout<<"-1"<<endl;
	else
	cout<<v[n-k]<<" "<<"0"<<endl;
}
