#include <bits/stdc++.h>
using namespace std;
long long f(long long x,long long n, long long m)
{
	long long r=0;
	x--;
	for(long long i=1;i<=n;++i)
	r+=min(m,x/i);
	
	return r;
}
int main()
{
	long long n,m,k,l,r;   cin>>n>>m>>k;
	l = 1; r= (n*m)+1;
	while(l<r)
	{
		long long x = (l+r)/2;
		if(f(x,n,m)<k)
		l = x+1;
		else
		r = x;
	}
	cout<<l-1<<endl;
}
