#include <bits/stdc++.h>
using namespace std;
int degree[5001];
int a[5001][5001];
int main()
{
	int n,m;  cin>>n>>m;	
	memset(degree,0,sizeof(degree));
	for(int i=0;i<m;++i)
	{
		int x,y;  cin>>x>>y;  a[x][y] = 1; a[y][x] = 1;
		degree[x]++;  degree[y]++;
	}
	int r = INT_MAX;
	for(int i=1;i<=n;++i)
	{
		for(int j=i+1;j<=n;++j)
		{
			if(a[i][j]==1)
			{
				for(int k=j+1;k<=n;++k)
				{
					if(a[i][k]==1 && a[j][k]==1)
					r = min(r,degree[i] + degree[j] + degree[k]);
				}
			}
		}
	}
	if(r!=INT_MAX)
	cout<<r-6<<endl;
	else
	cout<<"-1"<<endl;
}
