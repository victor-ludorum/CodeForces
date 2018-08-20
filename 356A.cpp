#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;   cin>>n>>m;
	map<long,int> ma;
	while(m--)
	{
		int l,r,x;   cin>>l>>r>>x;
		if(x==l)
		ma[r] = x;
		else
		ma[l] = x;
	}
	for(int i=1;i<=n;++i)
	cout<<ma[i]<<" ";
	cout<<endl;
}
