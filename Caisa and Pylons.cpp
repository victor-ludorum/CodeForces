#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	vector<long> a;
	for(int i=0;i<n;++i)
	{
		long x;  cin>>x;  a.push_back(x);
	}
	long m = *max_element(a.begin(),a.end());
	cout<<m<<endl;
}
