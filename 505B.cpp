#include <bits/stdc++.h>
using namespace std;
vector< pair<int,int> > v[505];
bool visited[505];
bool flag;
void dfs(int x,int y,int c)
{
	visited[x] = true;
	if(x==y)
	flag = true;
	for(int i=0;i<v[x].size();++i)
	{
		int h = v[x][i].first; int l = v[x][i].second;
	//	cout<<h<<endl;
		if(!visited[h] && l==c )
		   dfs(h,y,c) ;
	}
	
}
int main()
{
	int n,m;   cin>>n>>m;
	vector<int> c;
	map<int,int> ma;
	for(int i=0;i<m;++i)
	{
		int x,y,z;   cin>>x>>y>>z;
		if(ma[z]<1) 
		c.push_back(z),ma[z]++;
		v[x].push_back(make_pair(y,z));  v[y].push_back(make_pair(x,z));
	}
	
	int q;  cin>>q;
	while(q--)
	{
	
		int x,y;  cin>>x>>y;  int k=0; 
		for(int i=0;i<c.size();++i)
		{
			memset(visited,false,sizeof(visited));
			flag = false;
			dfs(x,y,c[i]);
			if(flag)
			   k++;
		//	cout<<endl;
		}
		cout<<k<<endl;
	}
}
