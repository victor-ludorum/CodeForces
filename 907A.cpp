#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;   cin>>a>>b>>c>>d;
	if((c<=d && 2*c>=d && d<b))
	cout<<2*a<<endl<<2*b<<endl<<d<<endl;
	else if (d<=c && 2*d>=c )
	cout<<2*a<<endl<<2*b<<endl<<c<<endl;	
	else
	cout<<"-1"<<endl;  
}
