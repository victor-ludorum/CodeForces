#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,x,y,z,e,f,r=0;   cin>>a>>b>>x>>y>>z;
	e = x*2 + y;
	f = y + 3*z;
	if(e>a)
	{
		r = r + abs(e-a);
	}
	if(f>b)
	{
		r = r + abs(f-b);
	}
	cout<<r<<endl;
}
