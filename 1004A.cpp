#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n+1];
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int r=0,c=0;
	for(int i=0;i<n;++i)
	{
		if(m[a[i]]<2)
		r = r + c;
		
		m[a[i]]++;
		if(m[a[i]]==1)
		{
			c++;
		}
		
		cout<<r<<" "<<c<<endl;
	}
	cout<<r<<endl;
}
