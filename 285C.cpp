#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;   cin>>n;
	vector<long> a;
	for(int i=0;i<n;++i)
	{
		long x;  cin>>x;  a.push_back(x);
	}
	sort(a.begin(),a.end());
	long s=0;
	for(long i=1;i<=n;++i)
	{
		if(a[i-1]!=i)
		s = s + abs(i-a[i-1]);
//		cout<<s<<endl;
	}
	cout<<s<<endl;
}
