#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;   cin>>n>>m;
	long a[n][m];
	int res=0;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;++i)
	{
		int min = INT_MAX;
		for(int j=0;j<m;++j)
		{
			if(a[i][j]<min)
			  min = a[i][j];
		}
		res = max(res,min);
	}
	cout<<res<<endl;
}
