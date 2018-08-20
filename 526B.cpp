#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n;   cin>>n;
	int m = (1<<(n+1))-1;
	for(int i=2;i<=m;++i)
	cin>>a[i];
	int r=0;
	for(int i=m/2;i>=1;--i)
	{
		r+=abs(a[i*2] - a[i*2+1]);
		a[i]+=max(a[i*2],a[i*2+1]);
	}
	cout<<r<<endl;
}
