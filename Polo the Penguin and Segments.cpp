#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k ;   cin>>n>>k;
	int a[n],b[n];
	int s = 0;
	for(int i=0;i<n;++i)
	{
		cin>>a[i]>>b[i];
		s = s+b[i] - a[i] + 1;
	}
	int r = s%k;
	if(r!=0)
	{
		int f = s/k;
		r = (f+1)*k - s;
		cout<<r<<endl;
	}
	else
	cout<<r<<endl;
	
}
