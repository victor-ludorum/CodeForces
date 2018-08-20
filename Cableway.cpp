#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r,g,b;
	cin>>r>>g>>b;
	int x=1,y=2,z=3,r1=0;
	   
	if(r>0)
	{
	  r = r-2;
	while(r>0)
	 {
		r = r-2;
		x = x + 3;
	 }
	
	 r1 = x + 30;
     }
	if(g>0)
	{
		 g = g-2;
	while(g>0)
	{
		g = g-2;
		y = y + 3;
	}
		r1 = max(r1,y+30);
	}
	
	if(b>0)
	{
		b = b-2;
	while(b>0)
	{
		b = b-2;
		z = z + 3;
	}
		r1 = max(r1,z+30);		
	}
	
	cout<<r1-1<<endl;
}
