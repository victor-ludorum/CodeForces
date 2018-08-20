#include <bits/stdc++.h>
using namespace std;
int a[109],b[109];
bool u[109];
int n;
int main()
{
	  cin>>n;
	for(int i=1;i<=n;++i)
	{
	  cin>>a[i];  b[a[i]]++;
	}
	for(int i=1;i<=n;++i)
	if(b[i]==0)
	{
	cout<<"-1"<<endl;return 0;
	 }
	long long k,r=1;
	for(int i=1;i<=n;++i)
	{
		if(!u[i])
		{
			for(int j=i,k=0;!u[j];j=a[j],k++)
			u[j] = true;
			
			if(k%2==0) k/=2;
			r=r/__gcd(r,k) *k;
		}
	}
	cout<<r<<endl;
}
