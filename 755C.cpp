#include <bits/stdc++.h>
using namespace std;
int a[10002],b[10002];
int main()
{
	int n;  cin>>n;
	
	for(int i=1;i<=n;++i)
	{
		a[i] = i;
	}
	for(int i=1;i<=n;++i)
	{
		cin>>b[i];
	}
	for(int i=1;i<=n;++i)
	{
	//	cout<<i<<endl;
		while(a[i]!=b[i])
		{
		    a[b[i]] = a[i];
		    b[i] = i;
		}
	//	cout<<a[i]<<endl;
	}
	int c=0;
	for(int i=1;i<=n;++i)
	{
		if(a[i]==i)
		c++;
	}
	cout<<c<<endl;
}
