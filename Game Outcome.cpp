#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n+1][n+1];
	int b[n+1],c[n+1];
	for(int i=1;i<=n;++i)
	{
		b[i] =0;  c[i] = 0;
	}
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
			cin>>a[i][j];
			b[i] = b[i] + a[i][j];
			c[j] = c[j] + a[i][j];
		}
	}
/*	for(int i=1;i<=n;++i)
	{
		cout<<b[i]<<" "<<c[i]<<endl;
	}                                 */
	int s = 0;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
			if(c[j] - b[i] > 0)
			s++;
		}
	}
	cout<<s<<endl;
}
