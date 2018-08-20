#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n],b[n];
	map<int,int> m;
	map<int,int> m1;
	int c =0,c1 = 0;
	for(int i=0;i<n;++i)
	{
		cin>>a[i]>>b[i];
		if(m[a[i]]<=0)
		{
			c++;  m[a[i]]++;
		}
		if(m1[b[i]]<=0)
		{
			c1++;  m1[b[i]]++;
		}
	}
	int r = min(c,c1);
	cout<<r<<endl;
	
}
