#include <bits/stdc++.h>
using namespace std;
long long c[100005],mn;
vector<int> v[100005];

dfs(int vi, bool visited[])
{
    visited[vi] = true;
    mn = min(mn,c[vi]);
    vector<int>::iterator i;
    for(i = v[vi].begin(); i != v[vi].end(); ++i)
        if(!visited[*i])
            dfs(*i, visited);
}
int main()
{
	int n,m;   cin>>n>>m;
	for(int i=1;i<=n;++i)
	{
		cin>>c[i];
	}
	
	for(int i=0;i<m;++i)
	{
		int x,y;   cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	bool visited[n+1];
   for(int i = 1; i <=n; i++)
        visited[i] = false;
 
    long long r=0;
    for (int i=1; i<=n; i++)
    {
        if (visited[i] == false)
        {
    	    mn = INT_MAX;        	
            dfs(i, visited);
            r+=mn;
        }
        
    }	
    
    cout<<r<<endl;
	
}
