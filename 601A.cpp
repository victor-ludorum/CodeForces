#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;  cin>>n>>m;
	map<pair<int,int>,int> ma;
	vector<int> v[n+1];
	vector<int> a[n+1];
//	cout<<"hello"<<endl;
	for(int i=0;i<m;++i)
	{
		int x,y; cin>>x>>y;
		ma[make_pair(x,y)]++; v[x].push_back(y);   v[y].push_back(x);  ma[make_pair(y,x)]++;
	}
//	cout<<"hello"<<endl;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
			if(i!=j && ma[make_pair(i,j)]<1)
			{
				a[i].push_back(j);  a[j].push_back(i); ma[make_pair(i,j)]++;  ma[make_pair(j,i)]++;
			}
		}
	}
//	cout<<"hello"<<endl;
	int d[n+1];
	int f[n+1];
	bool vis[n+1];
	
	for(int i=1;i<=n;++i)
	d[i]=-1,f[i]=-1,vis[i] = false;
//	cout<<"hello"<<endl;
	queue<int> q;
	q.push(1);
	d[1] =0;  vis[1] = true;
	while(!q.empty())
	{
		int h = q.front(); q.pop();
		for(int i=0;i<v[h].size();++i)
		{
			int j = v[h][i];
			if(!vis[j])
			{
				d[j] = d[h] +1;  q.push(j); vis[j] = true;
			}
		}
	}
	
	for(int i=1;i<=n;++i)
	  vis[i] = false;
	
	q.push(1);
	f[1] =0;  vis[1] = true;
	while(!q.empty())
	{
		int h = q.front(); q.pop();
		for(int i=0;i<a[h].size();++i)
		{
			int j = a[h][i];
			if(!vis[j])
			{
				f[j] = f[h] +1;  q.push(j); vis[j] = true;
			}
		}
	}
	  if(d[n]==-1 || f[n]==-1)
	  cout<<"-1"<<endl;
	  else
	  cout<<max(d[n],f[n])<<endl;
}
