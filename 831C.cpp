#include <bits/stdc++.h>
using namespace std;
long long a[10000],b[10000];
int main()
{
	int k,n;   cin>>k>>n;
	map<long long,int> m;
	for(int i=0;i<k;++i)
	  cin>>a[i];
	for(int i=0;i<n;++i)
	   cin>>b[i] , m[b[i]]++ ;
    long long r=0;
	for(long long i=-4000000;i<=4000000;++i)
	{
		int c =0;long long h=i;
	   	for(int j=0;j<n;++j)
	   	{
	   		h = h+b[j];
	   	   if(m[h]>1)
			  c++;	
		}
		if(c==n)
		  r++;
	}
	cout<<r<<endl;
}
