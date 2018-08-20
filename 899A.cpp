#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n+1];
	int o=0,t=0;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		if(a[i]==1)
		o++;
		else
		t++;
	}
	if(t>o)
	cout<<o<<endl;
	else
	{
		int r = t;
		o = o-t;
		int h = o/3;
		r = r+h;
		cout<<r<<endl;
	}
}
