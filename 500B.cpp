
#include <bits/stdc++.h>
using namespace std;
int r;
int a[320];

vector<int> v[320];

	bool vi[321];
void dfs(int i)
{
	vi[i] = true;
    for(int j=0;j<v[i].size();++j)
	{
	   int h = v[i][j];
	   if(!vi[h])
	   {
	   	   if(a[r]>a[h] && r<h)
	   	     swap(a[r],a[h]);
	   	    dfs(h);
	   }	
	}	
}
int main()
{
	int n;  cin>>n;   char p[320][320];
	
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			cin>>p[i][j];
			if(p[i][j]=='1')
			v[i].push_back(j) , v[j].push_back(i);
		}
	}
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
            vi[j] = false;	
		r =i;
		dfs(i);
	}
	for(int i=0;i<n;++i)
	cout<<a[i]<<" ";
}
