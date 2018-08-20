#include <bits/stdc++.h>
using namespace std;
int c[100005];
vector<int> v[100005];
int main()
{
	int n,m;   cin>>n>>m;
	for(int i=1;i<=n;++i)
	cin>>c[i];
	
	map<int,int> ma;
	for(int i=0;i<m;++i)
	{
		int x,y;   cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	map<pair<long long,long long> , long long> w;
	for(int i=1;i<=n;++i)
	{
		
		for(int j=0;j<v[i].size();++j)
		{
			if(c[v[i][j]]!=c[i] && w[make_pair(c[i],c[v[i][j]])]<1)
			{
				ma[c[i]]++;
				w[make_pair(c[i],c[v[i][j]])]++;
			}
		}
	}

	int r = INT_MIN,in;	
	sort(c+1,c+n+1);
	for(int i=1;i<=n;++i)
	{
//		cout<<c[i]<<" "<<ma[c[i]]<<endl;
		if(r<ma[c[i]])
		{
			r = ma[c[i]];
			in = c[i];
		}		
	}
	   cout<<in<<endl;
}
