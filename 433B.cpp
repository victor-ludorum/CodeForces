#include <bits/stdc++.h>
using namespace std;
long long a[100005],b[100005],c[100005],d[100005];
int main()
{
	int n;  cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i]; b[i] = a[i];
		c[i] = c[i-1] + a[i]; 
	}
	sort(b+1,b+n+1);
 	for(int i=1;i<=n;++i)
	{
		d[i]= d[i-1] + b[i]; 
	}
//	for(int i=1;i<=n;++i)
//	cout<<c[i]<<" "<<d[i]<<endl;
	int q;  cin>>q;
	while(q--)
	{
		int t,x,y;  cin>>t>>x>>y;
		if(t==1)
		{
			cout<<c[y]-c[x]+a[x]<<endl;
		}
		else
		cout<<d[y]-d[x]+b[x]<<endl;
	}
}
