#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	int n;   cin>>n;
	map<int,int> m,p;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	int c=0;
	c+=m[0];
	
	for(int i=0;i<n;++i)
	{
		if(m[a[i]]>=2 && p[a[i]]<1 && a[i]!=0)
		c+=m[a[i]]-1,p[a[i]]++;
	}
	cout<<c<<endl;
}
