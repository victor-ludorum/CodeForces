#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;   cin>>n;
	vector<long long> v[n+1];
	map<long long,long long> m;
	for(long long i=1;i<n;++i)
	{
		long long u,w;   cin>>u>>w;
		v[u].push_back(w);
		v[w].push_back(u);
	}
	
	long long c[2];   c[1]=c[2]=0;
	queue<long long> q;
	q.push(1);
	m[1]=1;
	c[1]++;
	bool visited[n+1];
	for(long long i=0;i<=n;++i)
	visited[i] = false;
	
	while(!q.empty())
	{
		long long k = q.front();
		q.pop();
		long long h = m[k];
		visited[k] = true;
		
		for(long long i=0;i<v[k].size();++i)
		{
			long long j = v[k][i];
		   if(!visited[j])
		   {
		   	  if(h==1)
		   	  {
		   	     c[2]++; m[j] = 2; 	
			  }
			  else
			  {
			  	c[1]++;  m[j] = 1; 
			  }
			  q.push(j);
		   }
		}
	}
	
	cout<<c[1]*c[2]-n+1<<endl;
}
