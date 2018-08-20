#include <bits/stdc++.h>
using namespace std;
int a[1000005];
bool c[1024][1024];
int main()
{ 
   int n,m;  cin>>n>>m;
   for(int i=0;i<n;++i)
     cin>>a[i], a[i]%=m;
	 
	if(n>m)
	{
		cout<<"YES"<<endl; return 0;
	}
	
	for(int i=0;i<=n;++i)
	  	c[i][0] = 1;
	for(int i=1;i<=n;++i)
	{
		for(int j=0;j<=m;++j)
		{
			c[i][j] = (c[i-1][(j+a[i-1])%m] || c[i-1][j]);
		}
	}
	if(c[n][m])
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
