#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	int c[n],a[n],b[n];
	for(int i=0;i<n;++i)
	cin>>a[i];
	for(int i=0;i<n;++i)
	cin>>b[i];
	int t = 0;
	for(int i=0;i<n;++i)
	if(a[i]!=b[i]) t++;
	if(t==2)
	{
	map<int,int> ma;
	int u,v;
	bool flag= true;
	for(int i=0;i<n;++i)
	{
		if(a[i]!=b[i] && flag)
		   c[i] = b[i],flag=false,u=i;
	    else if(a[i]!=b[i] && !flag)
	       c[i] = a[i],v=i;
	    else
	    c[i] = a[i];
	}
	for(int i=0;i<n;++i)
    {
    	ma[c[i]]++;  if(ma[c[i]]>1)
    {
		c[u] = a[u];
    	c[v] = b[v];
    }
	}  
	for(int i=0;i<n;++i)
	cout<<c[i]<<" ";
    }
    if(t==1)
    {
    	int y;
    	for(int i=1;i<=n;++i)
    	{
    		if(m[i]<1)
    		{
    			y = i;break;
			}
		}
 	for(int i=0;i<n;++i)
	{
		if(a[i]!=b[i])
		   c[i] =y;
	    else
	    c[i] = a[i];
	}
	for(int i=0;i<n;++i)
	cout<<c[i]<<" ";
	}
}
