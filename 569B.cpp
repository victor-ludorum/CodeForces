#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	vector<int> a,r,c;
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x;  a.push_back(x);  m[x]++;
		if(m[x]>1 || x>n)
		r.push_back(i);
	}
	for(int i=1;i<=n;++i)
	if(m[i]<1)
	c.push_back(i);
	
	for(int i=0;i<r.size();++i)
	{
		a[r[i]] = c[i];
	}
	for(int i=0;i<n;++i)
	   cout<<a[i]<<" ";
}
