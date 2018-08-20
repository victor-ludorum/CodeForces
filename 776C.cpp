#include <bits/stdc++.h>
using namespace std;
long long a[1000005];long long n,k,i=0,r=0,b;
int main()
{
	  cin>>n>>k;
	map<long long,int> m;m[0]++;
	while(i<n)
	{
		cin>>a[i]; a[i]+=a[i-1]; b=1;
		if(k==1)
		r+=m[a[i]-1];
		else if(k==-1)
		r+=m[a[i]-1], r+=m[a[i]+1];
		else
		{
		   while(abs(b)<1e14+5)
		   {
		      r+=m[a[i]-b];
			  b*=k;	
		   }	
		}
		m[a[i]]++;  i++;
	}
//	partial_sum(a,a+n+1,a);
	cout<<r<<endl;
}
