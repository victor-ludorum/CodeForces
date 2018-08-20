#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int s[n],u[n],a[n],b[n],c[n],d[n],e[n];
	string p[n];
	int t[n];
	for(int i=0;i<n;++i)
	{
		cin>>p[i]>>s[i]>>u[i]>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
		t[i] = s[i]*100 - u[i]*50 + a[i] + b[i] + c[i] + d[i] + e[i];
	}
	
	int r = INT_MIN;
	int ir;
	for(int i=0;i<n;++i)
	{
		if(r<t[i])
		{
			r = t[i];   ir = i;
		}
	}
	cout<<p[ir]<<endl;
}
