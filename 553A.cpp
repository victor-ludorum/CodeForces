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

	int k;   cin>>k;
	int a[k+1];
	
	for(int i=1;i<=k;++i)   cin>>a[i];
	
	long long r=1, t=0;
	for(int i=1;i<=k;++i)
	{
		r = (r * c[t+a[i]-1][a[i]-1] )%1000000007;
		t = t + a[i];
	}
	
	cout<<r<<endl;
}
