#include <bits/stdc++.h>
using namespace std;
int a[1000007];
int main()
{
	int n,l,r,ql,qr,res=INT_MAX;   cin>>n>>l>>r>>ql>>qr;
	
	for(int i=1;i<=n;++i)
	{
		cin>>a[i]; a[i]+=a[i-1];
	}
	
	for(int i=0;i<=n;++i)
	{
		int h = a[i]*l + (a[n]-a[i])*r;
		if(i>n-i) h = h + (i-(n-i)-1)*ql;
		if(i<n-i) h = h + ((n-i)-i-1)*qr;
		res = min(res,h);
	}
	 cout<<res<<endl;
}
