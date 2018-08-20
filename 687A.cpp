#include <bits/stdc++.h>
using namespace std;
vector<int> v[100005];
bool visited[100005];
int a[100005];

void dfs(int x,int c)
{
	a[x] = c;
	vector<int>::iterator i;
	for(i=v[x].begin();i!=v[x].end();++i)
	{
		if(a[*i])
		{
			if(a[*i]!=3-a[x])
			{
				cout<<"-1"<<endl;   exit(0);
			}
		}
		else dfs(*i,3-a[x]);
	}
}
int main()
{
	int n,m;  cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		int x,y;  cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;++i)
	{
		if(!a[i]) dfs(i,1);
	}
	int f = count(a+1,a+1+n,1);
	cout<<f<<endl;
	for(int i=1;i<=n;++i)
	if(a[i]==1)
	cout<<i<<" ";
	cout<<endl;
	cout<<n-f<<endl;
	for(int i=1;i<=n;++i)
	if(a[i]==2)
	cout<<i<<" ";
}
