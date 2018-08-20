#include<bits/stdc++.h>
using namespace std;
vector< int > v[150004];
bool vi[150004];
void dfs(int x,int &c,int &g)
{
	vi[x] = true;
	++c;
	g+=v[x].size();
	for(int i=0;i<v[x].size();++i)
	{
		if(!vi[v[x][i]])
		{
			dfs(v[x][i],c,g);
		}
	}
}
int main()
{
	int n,m;  cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		int a,b;  cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;++i)
	{
		if(!vi[i])
		{
			int c=0,g=0;
			dfs(i,c,g);
			if(g!=(long long)c*(c-1))
			{
				cout<<"NO"<<endl;  return 0;
			}
		}
	}
	cout<<"YES"<<endl;
}
