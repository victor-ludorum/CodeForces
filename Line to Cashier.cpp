#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int r[n];
	for(int i=0;i<n;++i)
	{
		r[i] = a[i]*15;
		for(int j=0;j<a[i];++j)
		{
			int x;  cin>>x;
			r[i] = r[i] + x*5; 
		}
	}
	sort(r,r+n);
	cout<<r[0]<<endl;
}
