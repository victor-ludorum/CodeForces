#include <bits/stdc++.h>
using namespace std;
 int ro[111],co[111];
 int a[111][111];
int main()
{
	int n,m;  cin>>n>>m;
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			cin>>a[i][j];
		}
	}
	int s=INT_MAX;  int r=0;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
		   if(a[i][j]>=0)
		   s = min(s,a[i][j]);
		}
	//	cout<<s<<endl;
		if(s>0 && s!=INT_MAX)
		{
		r+=s; ro[i] = s;
	    
		for(int j=1;j<=m;++j)
		{
		   a[i][j] = a[i][j] - s;
		}
		
	    }
	     s = INT_MAX;
	}
	
	for(int j=1;j<=m;++j)
	{
		for(int i=1;i<=n;++i)
		{
		   if(a[i][j]>0)
		   s = min(s,a[i][j]);
		}
    //    	cout<<s<<endl;
		if(s>0 && s!=INT_MAX)
		{
		r+=s; co[j] = s;
	    
		for(int i=1;i<=n;++i)
		{
		   a[i][j] = a[i][j] - s;
		}
		
	    }
          s = INT_MAX;
	}
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			if(a[i][j]!=0)
			{
				cout<<"-1";  return 0;
			}
		}
	}
	
	cout<<r<<endl;
	for(int i=1;i<=n;++i)
	if(ro[i]>0)
	for(int j=0;j<ro[i];++j)
	cout<<"row"<<" "<<i<<endl;
	
	for(int i=1;i<=m;++i)
	if(co[i]>0)
	for(int j=0;j<co[i];++j)	
	cout<<"col"<<" "<<i<<endl;


}
