#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	long long p[n+1];
	for(int i=0;i<n;++i)
	  cin>>p[i];
	
	pair<long long,long long> a[6];
	for(int i=1;i<=5;++i)
	{
		cin>>a[i].first;
		a[i].second = i;
	}
	map<long long,long long> m;
	sort(a,a+5);
	for(int i=0;i<n;++i)
	{
		if(i!=0)
		p[i] = p[i]+p[i-1];
		while(p[i]>=a[1].first)
		{
		 int j;
	     for(j=1;j<=5;++j)
	     {
	     if(p[i]<a[j].first) 
		 break;  	
	     }
	   long long q = p[i]/a[j-1].first;
	   p[i] = p[i]-q*a[j-1].first;
	   m[a[j-1].second]+=q;
       }
	}
	
	for(int i=1;i<=5;++i)
	cout<<m[i]<<" ";
	cout<<endl<<p[n-1];
}
