#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,h,i,r;   cin>>n>>a>>b;
	int s = min(a,b);
	int re = max(a,b);
	r = INT_MIN;
	for(i=1;i<n;++i)
	{		
		int h = (s/i);
		int g = (re/(n-i));
		r = max(r,min(h,g));
	}
	cout<<r<<endl;
}
