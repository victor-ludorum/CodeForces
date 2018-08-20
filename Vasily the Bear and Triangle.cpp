#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y,x1,y1,x2,y2;     cin>>x>>y;
	if(x>0 && y>0)
	{
	   x1 = 0;  y2 = 0;
	   	x2 = x + y;
	   	y1 = x2;
	}
	else if(x>0 && y<0)
	{
		x1 = 0; y2 = 0;
		x2 = x - y;
		y1 = -x2;
	}
	else if(y>0 && x<0)
	{
	   y1 = 0;  x2 = 0;	
	   x1 = x - y;
	   y2 = -x1;
	}
	else
	{
		x2 = 0; y1 =0;
		x1 = x+y;
		y2 = x1;
	}
	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
}

