#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	int n;double k;   cin>>n>>k;
	
	double a[n+1],s=0;
	for(int i=0;i<n;++i)
	{
		cin>>a[i]; s+=a[i];
	}
	s = s*k;
//	cout<<s<<endl;
	for(int i=0;i<k;++i)
	{
		s = s-a[i]*(k-i-1);
	}
//	cout<<s<<endl;
	int j=1;
	
	for(int i=n-1;i>=n-k+1;--i)
	{
		s = s-a[i]*(k-j);  j++;
	}
//	cout<<s<<endl;
	k = n-k+1;
	s = s/k;
	printf("%.10f",s);
}
