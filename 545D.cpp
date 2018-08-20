#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	vector<long long> v;
	for(int i=0;i<n;++i)
	{
		long long x;  cin>>x;  v.push_back(x);
	}
	sort(v.begin(),v.end());
	long long s=0;  int c=0;
	for(int i=0;i<n;++i)
	{
		if(s<=v[i])
		c++,s = s + v[i];
//		cout<<s<<" "<<v[i]<<endl;
		
	}
	cout<<c<<endl;
}
