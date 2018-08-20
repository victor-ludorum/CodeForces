#include <bits/stdc++.h>
using namespace std;
	int f[100006],b[100005];
int main()
{
	int n;   cin>>n;
	int a[n+1];
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
     f[1] =0;
	for(int i=2;i<=n;++i)
	{
		f[i] = f[i-1] + a[i-1];
	}
	b[n] =0;
	for(int i=n-1;i>=1;--i)
	{
		b[i] = b[i+1] + a[i+1];
	}
	int g=0,h=0;
	for(int i=1;i<=n;++i)
	{
		if(f[i]>b[i]) g++;
		else h++;
	}
	
	cout<<h<<" "<<g<<endl;
}
