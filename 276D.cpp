#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long l,r;   cin>>l>>r;
	
	long long a = l^r;
	long long li=0;
	while(a)
	{
	  li++; a>>=1;	
	}
	
	long long b=1,y=0;
	while(li--)
	{
		y+=b;  b<<=1;
	}
	
	cout<<y<<endl;
}
