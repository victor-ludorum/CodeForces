#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{  
  // Find floating point value of 
  // square root of x.
  long double sr = sqrt(x);
 
  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}
int main()
{
	int n;  cin>>n;
	int a[n+1];
	for(int i=0;i<n;++i)
	  cin>>a[i];
	
	int sq=0;
	vector<long double> v;
	for(int i=0;i<n;++i)
	{
	  if(isPerfectSquare(a[i]))
	  sq++,v.push_back(0);
	  else
	  {
	  	long d = sqrt(a[i]);
	  	v.push_back(min(a[i]-d*d,d*d+1+2*d-a[i]));
	  }	
	}
	
	if(sq>n/2)
	{
		cout<<sq-(n/2)<<endl;
	}
	else
	{
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();++i)
		cout<<v[i]<<" ";
		cout<<endl;
		long r=0;
		for(int i=0;i<v.size();++i)
		{
			if(v[i]>0)
			{
			r+=v[i]; sq++;
			if(sq>=n/2)
			break;
		    }
		}
		cout<<r<<endl;
	}
}

