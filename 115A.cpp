#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	int a[n],r =0;
	for(int i=0;i<n;++i) cin>>a[i];
	for(int i=0;i<n;++i)
	{
		int k = a[i]; int c=1;
		while(k>0)
		c++, k = a[k-1];
		r = max(r,c);
	}
	cout<<r<<endl;
}
