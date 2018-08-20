#include <bits/stdc++.h>
using namespace std;
vector<int> v[100005];
int a[100005],b[100005];
bool vis[100005];
int d[100005];
int p[100005];
int main()
{
	int n;  cin>>n;
	vector<int> c;
	memset(p,-1,sizeof(p));
	p[1] =1;
	for(int i=1;i<=n-1;++i)
	{
		int x,y;  cin>>x>>y;
		if(x==1)
	{
		v[x].push_back(y); p[y] = x; continue; }
		else if(y==1)
	{	v[y].push_back(x) , p[x] = y;continue;}
		
		if(p[x]==-1)
		v[y].push_back(x) , p[x] = y;
		else
		v[x].push_back(y), p[y] = x;
	}
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;++i)
	{
		cin>>b[i];
	}  
/*	for(int i=1;i<=n;++i)
	{
	     for(int j=0;j<v[i].size();++j)
		 cout<<v[i][j]<<" ";
		 cout<<endl;	
	} */
//	for(int i=0;i<c.size();++i)
//	cout<<c[i]<<endl;
     for(int i=1;i<=n;++i)
     {
     			if(a[i]!=b[i])
		{
			c.push_back(i); break;
		}
	 }
	vector<int> r;
	for(int i=0;i<c.size();++i)
{
	r.push_back(c[i]);
	memset(d,-1,sizeof(d));
	memset(vis,false,sizeof(vis));
	queue<int> q;
	q.push(c[i]);
	vis[c[i]] = true; d[c[i]] = 0;
	while(!q.empty())
	{
		int h = q.front();  q.pop();
		if(d[h]%2==0)
		a[h] = 1- a[h];
		if(a[h]!=b[h])
		  c.push_back(h);
		for(int j=0;j<v[h].size();++j)
		{
			int f = v[h][j];
			if(!vis[f])
			 {
				vis[f] =true; q.push(f); d[f] = d[h] + 1;
			 }
		}
	}
	
    
}
    
    cout<<r.size()<<endl;
    for(int i=0;i<r.size();++i)
    cout<<r[i]<<endl;
}
