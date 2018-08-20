#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;   cin>>n>>m;
	vector<int> v;
	int r=0;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x;  v.push_back(x);
	}
	for(int i=0;i<m;++i)
	{
		int x,y;  cin>>x>>y;  int s=0;
		for(int j=x-1;j<y;++j)
		{
			s = s + v[j];
		}
		if(s>0)
		r = r+ s;
	}
	cout<<r<<endl;
}
