#include <bits/stdc++.h>
using namespace std;
map<int,int> m;
map<int,int> p;
bool visited[100001];
	int n,m1;
	int count = 0; 
	int a[100001];
void dfs(vector< int> *v,int z)
{	
   visited[z] = true;
  
   vector<int>::iterator i;
   for(i=v[z].begin();i!=v[z].end();++i)
   {
   	  if(!visited[*i])
   	  {
          if(a[*i]==1&&p[z]>=1)
		  p[*i] = p[z] + 1;
		  else if(a[*i]==0 && p[z]>m1)
		  p[*i] = p[z];
		  else if(a[*i]==1&&p[z]==0)
		  p[*i] = 1;
		  else if(a[*i]==0)
		  p[*i] = 0;	 
		 dfs(v,*i); // recursion 	
	  }
   }
}
int main()
{
    cin>>n>>m1;
	
	for(int i=1;i<=n;++i)
	cin>>a[i];
	
	vector< int > v[n+1];
	for(int i=1;i<=n-1;++i)
	{
		int x,y;   cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	// Getting the leaf nodes....
	int l =0;
	for(int i=2;i<=n;++i)
	{
		if(v[i].size()==1)
	    {
	      l++;	m[i] = 1;
		}
	}
	memset(visited,false,sizeof(visited));
	if(a[1]==1)
	{
		p[1] = 1;
	}
	dfs(v,1);
	int c=0;
	for(int i=1;i<=n;++i)
	{
		if(m[i]==1)
		{
			if(p[i]>m1)
			c++;
		}
	}
	cout<<l-c<<endl;
}
