#include <bits/stdc++.h>
using namespace std;
int degree[5001];
int a[10001][10001];
int main()
{
	int n;   cin>>n;
	int r = INT_MIN;
	for(int i=0;i<n-1;++i)
	{
		int x,y;  cin>>x>>y; a[x][y] =1; a[y][x] =1;
		degree[x]++;  degree[y]++;
		r = max(max(r,degree[x]),degree[y]);
	}
	cout<<r+1<<endl;
	int c=1;
	for(int i=1;i<=n;++i)
	{
	   if(c<=r+1)
	   cout<<c<<" ",c++;
	   else
	   {
	   	 c=1;  cout<<c<<" ";  c++;
	   }
	}
}

