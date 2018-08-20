#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;    cin>>a>>b;
	int n = a.length();
	int e = b.length();
	long long r=0;
	if(n==e)
	{
		for(int i=0;i<n;++i)
		{
			if(a[i]!=b[i])
			r++;
		}
		cout<<r<<endl;
	}
	else
	{
		long long p[e+1]; p[0] =0; 
		for(int i=1;i<=e;++i)
		{
			p[i] = p[i-1] + b[i-1]-'0';
		}
		int k = e - (n-1);
		for(int i=1;i<=n;++i)
		{
			if(a[i-1]=='0')
			r = r + p[e-(n-i)]-p[i-1];
			else
			{
			r =  r + ((e-(n-i))-i+1) - (p[e-(n-i)] - p[i-1]);
		    }
		}
		cout<<r<<endl;
	}
}
