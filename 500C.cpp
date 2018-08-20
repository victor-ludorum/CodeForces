#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005];
int main()
{
	int n,m,s=0;   cin>>n>>m;
	for(int i=1;i<=n;++i)
	cin>>a[i], b[i] = -1;
	for(int j=1;j<=m;++j)
	{
		int p;   cin>>p;
		for(int i=1;i<=n;++i)
		{
			if(b[i]>b[p]) s+=a[i];
		}
		b[p] = j;
	}
	cout<<s<<endl;
}
