#include <bits/stdc++.h>
using namespace std;
vector<int> v[10000];
int a[4000][4000];
int main()
{
	int n,m,r=0;  cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		int x,y;   cin>>x>>y;
		v[x-1].push_back(y-1);
	}
	
	for(int i=0;i<n;++i)
	{
		for(auto j:v[i])
		{
			for(auto k: v[j])
			{
				if(i!=k)
				r+=a[i][k];
				
				a[i][k]++;
			}
		}
	}
	
	cout<<r<<endl;
}
