#include<bits/stdc++.h>
using namespace std;
int a[505][505];
int b[5005],c[5005];
int main()
{
	int n,m,q;   cin>>n>>m>>q;
    for(int i=0;i<n;++i)
	{
	  for(int j=0;j<m;++j)
	  {
	     cin>>a[i][j];	
	  }	
	}	
	for(int i=0;i<q;++i)
	{
		int x,y;  cin>>x>>y;
		if(a[x-1][y-1]==1)
		a[x-1][y-1]=0;
		else
		a[x-1][y-1] =1;  long s=0;
		for(int i=0;i<n;++i)
		{
			long k =0;
		for(int i=0;i<m;++i)
		{
			k = k+a[x-1][i];
		}
		 s= max(s,k);
	    }
	    cout<<s<<endl;
	}
}
