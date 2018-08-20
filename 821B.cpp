#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,bi;  cin>>m>>bi;
	long long x = bi*m;  long long y = bi;
	
	long long h,b;
	if(x%2!=0 && y%2!=0)
	{
		if(x>y)
		{
			h = x/2 + 1;
			b = y/2;
		}
		else
		{
			h = x/2;  b = y/2 +1;
		}
	}
	else if(x%2==0 && y%2==0)
	{
		h = x/2+1;  b = y/2;
	}
	else
	{
		if(x&1)
		{
			h = x/2 ; b = y/2+1;
		}
		else
		{
			h = x/2+1;  b = y/2;
		}
	}
	long long r =0;
	r = r + (h*(h+1))/2 + (b*(b+1))/2;
	long long p = max(h,b);  long long q = min(h,b);
	for(int i=1;i<=p;++i)
	{
	  r = r + ((q*(q+1))/2)+q*i;	
	}
	cout<<r<<endl;
}
