#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n+1];
	for(int i=0;i<n;++i)
	cin>>a[i];
	
	int c=-1;
	int mn = *min_element(a,a+n);
	int r=INT_MAX;
	for(int i=0;i<n;++i)
	{
		if(a[i]==mn && c==-1)
		{
			c=i;
		}
		else if(a[i]==mn)
		{
			r = min(r,i-c);
			c = i;
		}
	//	cout<<c<<endl;
	}
	cout<<r<<endl;
}
