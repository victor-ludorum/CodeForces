#include <bits/stdc++.h>
using namespace std;
int d[5005][5005];
int main()
{
	int n,m,k;   cin>>n>>m>>k;
	int a[n+1];
	for(int i=1;i<=n;++i)
	  cin>>a[i], a[i] = a[i-1] + a[i];
	
	
	for(int i=m;i<=n;++i)
	{
		for(int j=1;j<=k;++j)
		{
			d[i][j] = max(d[i-1][j],d[i-m][j-1] + a[i] - a[i-m]);
		}
	}
	    cout<<d[n][k]<<endl;
}
