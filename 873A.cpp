#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x,s=0;   cin>>n>>k>>x;
	int a[n+1];
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-k;++i)
	 s+=a[i];
	 
	 s=s + x*k;
	 cout<<s<<endl;
}
