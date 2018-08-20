#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	vector<int> v;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x;  v.push_back(x); 
		if(i==0)
		v[i] = min(v[i],1);
		else
		v[i] = min(v[i],v[i-1]+1);
	}
	for(int i=n-2;i>=0;--i)
	v[i] = min(v[i],v[i+1]+1);
	sort(v.begin(),v.end());
	cout<<v[n-1]<<endl;
}
