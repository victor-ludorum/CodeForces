#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a,b,p,q,r;   cin>>n>>a>>b>>p>>q;
	long long u = n/a;
	long long v = n/b;
	long long h = __gcd(a,b);
	long long t = (a*b)/h;
	long long w = n/t;
	if(p>q)
	v = v-w;
	else
	u = u-w;
	
	r = u*p + v*q;
	cout<<r<<endl;
}
