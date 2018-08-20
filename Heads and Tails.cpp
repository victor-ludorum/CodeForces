#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,a,b;   cin>>x>>y>>a>>b;
	int s = 0;
	s = s + (x-b);
	for(int i=b+1;i<x;++i)
	{
		s = s + (x-b-1);
	}
	cout<<s<<endl;
	for(int i=b+1;i<=x;++i)
	{
		cout<<i<<" "<<b<<endl;
		
	}
}
