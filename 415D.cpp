#include <bits/stdc++.h>
using namespace std;
long long a[2223][2223];
int main()
{
	int n,k;  cin>>n>>k;
	long long r=0;
	for(int i=1;i<=n;++i)
	{
		a[i][1] =1 ;
		for(int j=1;j<=k;++j)
		{
			for(int p=i;p<=n;p+=i)
			(a[p][j+1]+=a[i][j])%=(1000000007);
		}
		r =(r + a[i][k])%(1000000007);
		
	for(int h=1;h<=n;++h)
	{
		for(int g=1;g<=k;++g)
		cout<<a[h][g]<<" ";
		cout<<endl;
	}
     cout<<endl;
	}
	
	cout<<r<<endl;
}
