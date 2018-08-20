#include <bits/stdc++.h>
using namespace std;
bool vis[50005];
vector<int> v[50005];
void dfs(int n)
{
	vis[n] = true;
//	cout<<n<<endl;
	for(int i=0;i<v[n].size();++i)
	{
	//	cout<<vis[n][i]<<endl;
		if(!vis[v[n][i]])
		dfs(v[n][i]);
	}
}
int main()
{
	int n,m,s;   cin>>n>>m>>s;

	for(int i=0;i<m;++i)
	{
		int x,y;   cin>>x>>y;
		v[x].push_back(y);
	}
	for(int i=1;i<=n;++i)
	vis[i] = false;
//	dfs(s);
	int r=0;
	for(int i=1;i<=n;++i)
	{
		if(!vis[i])
		{
			dfs(i);
			r++;
		}
	}
	
	cout<<r-1<<endl;
}
