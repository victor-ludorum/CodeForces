#include <bits/stdc++.h>
using namespace std;
int a[100005],b[100005],c[100005];
int main()
{
	int n;  cin>>n;
	long long s=0;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		s+=a[i];
	}
	for(int i=0;i<n;++i)
	{
		cin>>b[i];
	}
	sort(b,b+n);
	if(b[n-1]+b[n-2]>=s)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
