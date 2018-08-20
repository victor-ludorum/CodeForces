#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	double a[n+1],p=1.0;
	for(int i=0;i<n;++i)
	cin>>a[i], p = p*(1.0-a[i]);
	
	double *mx = max_element(a,a+n);
	double r=0.0;
	for(int i=0;i<n;++i)
	{
		r = r + (p*(a[i]/(1-a[i])));
	}
	double m = max(r,*mx);
	printf("%.12f\n",m);
}
