#include <bits/stdc++.h>
using namespace std;
int a[102];
vector<int> v[10007];
int n,m;
int topsort()
{
	int ans =0;
	queue<int> q;
	while(1)
	{
		for(int i=1;i<=n;++i)
		{
			if(a[i]==1)
			q.push(i);
		}
		if(q.empty()) return ans;
		while(!q.empty())
		{
			int h = q.front();q.pop();
			a[h] =0;
			for(int i=0;i<v[h].size();++i)
			{
				a[v[h][i]]--;
			}
		}
		ans++;
	}
}
int main()
{
	  cin>>n>>m;
	for(int i=0;i<m;++i)
	{
		int x,y;  cin>>x>>y; a[x]++;  a[y]++;
		v[x].push_back(y);  v[y].push_back(x);
	}
	
	cout<<topsort();
}
