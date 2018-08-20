#include <bits/stdc++.h>
using namespace std;
int a[501], d[501][501];
int main()
{
	int n,m,b,md;  cin>>n>>m>>b>>md;
	for(int i=1;i<=n;++i)
	  cin>>a[i];
	d[0][0] = 1;
	for(int i=1;i<=n;++i)
	{
		for(int j=0;j<m;++j)
		{
			for(int k=0;k<=b-a[i];++k)
			{
				if(d[j][k])
				{
				d[j+1][k+a[i]] = (d[j+1][k+a[i]] + d[j][k])%md;
			    }
			}
		}
	}
	int r=0;
	for(int i=0;i<=b;++i) r = ( r + d[m][i])%md;
	cout<<r<<endl;
}
