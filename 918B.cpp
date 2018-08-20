#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;  cin>>n>>m;
	map<string,string> ma;
	for(int i=0;i<n;++i)
	{
		string x,y;   cin>>x>>y;
		ma[y] = x;
	}
	for(int i=0;i<m;++i)
	{
		string x,y;  cin>>x>>y;
		string g="";
		for(int j=0;j<y.length()-1;++j)
		g+=y[j];
		cout<<x<<" "<<y<<" #"<<ma[g]<<endl;
	}
}
