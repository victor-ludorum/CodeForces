#include <bits/stdc++.h>
using namespace std;
vector<int> v[55];
bool vi[55];
int c;
void dfs(int x)
{
	vi[x] = true;
	for(int i=0;i<v[x].size();++i)
	{
		int d = v[x][i];
		if(!vi[d])
		{
			dfs(d); c++;
		}
	}
}
int main()
{
	int n,m;  cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		int x,y;  cin>>x>>y;
		v[x].push_back(y); v[y].push_back(x);
	}
	long long r = 1;
	memset(vi,false,sizeof(vi));
	for(int i=1;i<=n;++i)
	{
		c=1; 
		if(!vi[i])
		{
			
			dfs(i);
			r*=pow(2,c-1);
		}
	
	}
	cout<<r<<endl;
}
