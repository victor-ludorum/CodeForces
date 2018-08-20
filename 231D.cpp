#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z,x1,y1,z1,r=0;   cin>>x>>y>>z>>x1>>y1>>z1;
	int a[7];
	for(int i=1;i<=6;++i)
	  cin>>a[i];
		if(x>x1)	r+=a[6];
	    if(y>y1)	r+=a[2];
	    if(z>z1)    r+=a[4];
	    if(x<0)     r+=a[5];
	    if(y<0)	    r+=a[1];
	    if(z<0)	    r+=a[3];  	
	cout<<r<<endl;
}
