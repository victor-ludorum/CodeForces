#include <bits/stdc++.h>
using namespace std;
long long c[1010][1010];
int main()
{
    c[0][0] =1;
	for(int i=1;i<1010;++i)
	{
		c[i][0] = 1;
		for(int j=1;j<=i;++j)
		{
			c[i][j] = (c[i-1][j] + c[i-1][j-1])%1000000007;
		}
	}
	
	int n,m,t;    cin>>n>>m>>t;
	long long r = 0;
	for(int i=4;i<=t-1 && i<=n;++i)
	r = r + (c[n][i])*c[m][t-i];
	cout<<r<<endl;
}
