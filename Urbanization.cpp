#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,n1,n2;   cin>>n>>n1>>n2;
	vector<double> v;   
	for(int i=0;i<n;++i)
	{
		double x;  cin>>x; v.push_back(x);
	}
	sort(v.begin(),v.end());   reverse(v.begin(),v.end());
	double r=0;
	if(n1>n2)
	{
		for(int i=0;i<n2;++i)
		{
			r=r+ v[i];
		}
		double s = r;
		r = 0;
		for(int i=n2;i<n1+n2;++i)
		{
			r = r+ v[i];
		}
	    r = (r/n1) + (s/n2);	
	}
	else
	{
		for(int i=0;i<n1;++i)
		{
			r=r+ v[i];
		}
		double s = r;
		r = 0;
		for(int i=n1;i<n1+n2;++i)
		{
			r = r+ v[i];
		}
	    r = (r/n2) + (s/n1);	
		
	}
	printf("%.8f",r);
}
