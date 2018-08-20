#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x,c,o=0,s;   cin>>a>>b>>c; int r=0,d=0;
	for(int i=0;i<a;++i)
	{
		cin>>x;
		if(x==1)
		o++;
		else
		d++;
	}
//	cout<<o<<endl;
	 int t = b + 2*c;
	 if(d > c)
	 {
	 	r = r + (d-c)*2;
	 	if(b < o)
	 	r = r + (o-b);
	 }
	 else
	 {
	 	t = t - d*2;
	 	r = t - o;
	 	if(r>=0)
	 	r =0;
	 	else
	 	r = abs(r);
	 }
      cout<<r<<endl;
}
