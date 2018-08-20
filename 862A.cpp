#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;   cin>>n>>x;
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		int y;   cin>>y;
      m[y]++;
	}
	int c=0;
	if(m[x]>0)
	c=1;
	
	for(int i=0;i<x;++i)
	{
		if(m[i]<1)
		c++;
	}
	cout<<c<<endl;
}
