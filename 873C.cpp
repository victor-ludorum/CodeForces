#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;   cin>>n>>m>>k;
	int a[n+1][m+1], b[n+1][m+1];
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			cin>>a[i][j];
			b[i][j] =0;
		}
	}
	for(int i=1;i<=m;++i)
	   b[0][i] = 0;
	
	for(int j=1;j<=m;++j)
	{
		for(int i=1;i<=n;++i)
		{
			if(a[i][j]==1)
			b[i][j] = b[i-1][j] + 1;
			else
			b[i][j] = b[i-1][j];
		}
	}
	
/*	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}   */
	int co[m+1],rp[m+1];
	for(int i=1;i<=m;++i)
	{
		co[i] =0; rp[i] =0;
	}
	
	for(int j=1;j<=m;++j)
	{
		int c=0,mx=0,in,rl,tt=0;
		
		for(int i=1;i<=n-k+1;++i)
		{
			  if(a[i][j]==1)
			   c = (b[i+k-1][j] - b[i][j]) + 1;
			   else
			   c = (b[i+k-1][j] - b[i][j]);
			  if(mx<c)
			  mx = c,in=i;		  
		}
	    for(int i=1;i<in;++i)
	    {
	    	if(a[i][j]==1)
	    	rp[j] = rp[j]+1;
		}
//		cout<<rp[j]<<endl;
		co[j]+=mx;
	}
	int r=0,p=0;
	for(int i=1;i<=m;++i)
	{
		r+=co[i];
		p+=rp[i];
	}
	cout<<r<<" "<<p<<endl;
	
}
