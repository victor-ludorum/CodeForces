#include <bits/stdc++.h>
using namespace std;
int solve(int a,int n)
{
	int s =0;
	while(a>0)
	{
		int r = a%n;
		s = s+r;  a = a/n;
	}
	return s;
}

int main()
{
	int a;   cin>>a;
	int s=0;
	for(int i=2;i<a;++i)
	{
	  s = s + solve(a,i);	
	}
	int y = a-2;
	int g = __gcd(s,y);
	s = s/g;
	y = y/g;
	cout<<s<<"/"<<y<<endl;
}
