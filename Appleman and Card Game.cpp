#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;   cin>>n>>k;
	long long a[26];
	for(int i=0;i<26;++i)
	  a[i] =0;
	for(int i=0;i<n;++i)
	{
		char c;  cin>>c;
		a[c-'A']++;
	}
	  sort(a,a+26);  
	long long p=0;
	for(long i=25;i>=0&&k!=0;i--)
	{
		long d = min(a[i],k);  p+=d*d;  k=k-d;
	} 
	cout<<p<<endl; 
}
