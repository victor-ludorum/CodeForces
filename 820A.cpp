#include <bits/stdc++.h>
using namespace std;
int main()
{
	int c,v,v1,a,l;
	cin>>c>>v>>v1>>a>>l;
	int d=1; c=c-v; int c1 = 1;
	while(c>0)
	{
	//	cout<<c<<endl;
	   int f = v+a*c1;
	   if(f>v1)
	   f = v1;
	   c = c-(f-l);
	   d++; c1++;
	}
	
	cout<<d<<endl;
}
