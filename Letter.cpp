#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;  cin>>n>>m;
	char a[n][m];
	int b[n],c[m];
	int k=0,l=0;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			cin>>a[i][j];
			if(a[i][j]=='*')
			{
				b[k++] = i;   c[l++] = j;
				cout<<b[k-1]<<" "<<c[l-1]<<endl;
			}
		}
	}
	cout<<k<<" "<<l<<endl;
	for(int i=0;i<k;++i)
	{
		cout<<b[i]<<" "<<endl;
	}
/*	int x,y,z,w;
	x = b[0];   y = b[k-1];
	z = c[0];   w = c[k-1];
	cout<<x<<y<<z<<w;
	for(int i=x;i<=y;++i)
	{
		for(int j=z;j<w;++j)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}                   */
}   
