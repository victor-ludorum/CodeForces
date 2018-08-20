#include <bits/stdc++.h>
using namespace std;
vector<int> v[100005];
bool vis[100005];
void dfs(int x)
{
	vis[x] = true;
	for(int i=0;i<v[x].size();++i)
	{
		if(!vis[v[x][i]])
		{
			dfs(v[x][i]);
		}
	}
}
int main()
{
	int n,m; cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		int x,y;   cin>>x>>y;
		v[x].push_back(y);  v[y].push_back(x);
	}
		if(n!=m)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	
	memset(vis,false,sizeof(vis));
	dfs(1);
	for(int i=1;i<=n;++i)
	{
		if(!vis[i])
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"FHTAGN!"<<endl;
}
