#include <bits/stdc++.h>
using namespace std;

char v[1002][1002];
bool r[1002];
bool c[1002];
int main()
{
	int n,m;  cin>>n>>m;
	memset(r,false,sizeof(r));
    memset(c,false,sizeof(c));
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			cin>>v[i][j];
			if(v[i][j]=='1')
			c[j] = true,  r[i] = true;
		}
	}
	long long s=0;
	for(int i=1;i<=n;++i)
	{
		int d =0;
		if(r[i])
		{
		  int h=0;
		for(int j=1;j<=m;++j)
		{
		
			if(v[i][j]=='1')
			{
				d+=h; h=0;
			}
			else
			h++;
		}
	    }
	    s+=d;
	}
//	cout<<s<<endl;
	for(int i=1;i<=n;++i)
	{
		int d=0;
		if(r[i])
		{
		int h=0;
		for(int j=m;j>=1;--j)
		{
			if(v[i][j]=='1')
			{
				d+=(h); h=0;
			}
			else h++;
		}
	    }
	    s+=d;
	}
//	cout<<s<<endl;
		for(int j=1;j<=m;++j)
	{
		int d =0;
		if(c[j])
		{
		  int h=0;
		for(int i=1;i<=n;++i)
		{
			if(v[i][j]=='1')
			{
				d+=(h); h=0;
			}
			else
			h++;
		}
	    }
	    s+=d;
	}
  //  cout<<s<<endl;
 		for(int j=1;j<=m;++j)
	{
		int d =0;
		if(c[j])
		{
		  int h=0;
		for(int i=n;i>=1;--i)
		{
			if(v[i][j]=='1')
			{
				d+=(h); h=0;
			}
			else
			h++;
		}
	    }
	    s+=d;
	}
      cout<<s<<endl;
}
