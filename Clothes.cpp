#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,ma;   cin>>n>>ma;
	int a[n+1];
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	int b[101][101];
	for(int i=1;i<=ma;++i)
	{
		int x,y;   cin>>x>>y;
		b[x][y] = 1;
		b[y][x] = 1;
	}
	bool flag = false;
	int s = INT_MAX;
	for(int i=1;i<=n-1;++i)
	{
		for(int j=i+1;j<=n;++j)
		{
			for(int k = j+1;k<=n;++k)
			{
			//	cout<<b[i][j]<<" "<<b[j][k]<<"  "<<b[i][k]<<endl;
				if(b[i][j]==1&&b[j][k]==1&&b[i][k]==1)
				{
				s = min(s,a[i]+a[j]+a[k]);
				flag = true;
			    }
			}
		}
	}
	if(flag)
	cout<<s<<endl;
	else
	cout<<"-1"<<endl;
   
}
