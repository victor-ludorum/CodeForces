#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;   cin>>n>>k;
	map<int,int> m;
	for(int i=0;i<k;++i)
	{
		    int x;   cin>>x;
			for(int j=0;j<x;++j)
			{
				int y;  cin>>y; m[y] = i+1;
			}
	}
	int q;  cin>>q;
	for(int i=0;i<q;++i)
	{
		int x,y,r;   cin>>x>>y;
		if(m[x]<=m[y])
		 r =  min(abs(m[y]-m[x]),abs(m[x]-1+(k-m[y]+1))); 
		else
		 r =  min(abs(m[y]-m[x]),abs(m[y]-1+(k-m[x]+1)));
		cout<<r<<endl;
	}
}
