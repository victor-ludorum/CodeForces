#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	int n;   cin>>n;
	int c[n+1];
	vector<int> v[n+1];
	for(int i=2;i<=n;++i)
	{
		int x;   cin>>x;
		v[i].push_back(x);
		v[x].push_back(i);
	}
	for(int i=1;i<=n;++i)
	{
		cin>>c[i];
	}
	int r=1;
	queue<int> q;
	bool vi[n+1];
	for(int i=1;i<=n;++i)
	vi[i] = false;
	
	int p[n+1];
	p[1] = c[1];
	q.push(1);
	vi[1] = true;
	while(!q.empty())
	{
	   	int g = q.front();
	   	q.pop();
	   	
	   	for(int i=0;i<v[g].size();++i)
	   	{
	   	  int x = v[g][i];
	   	  if(vi[x]==false)
	   	  {
		  if(c[x]!=c[g])
		  {
		    r++;	
		  }	
		  q.push(x); vi[x] = true;
	      }		  
		}
	}
	
	cout<<r<<endl;
}
