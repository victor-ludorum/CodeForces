#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	string a,b;  cin>>a>>b;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int i=0,j=0;
	while(i<n && j<n)
	{
		if(a[i]<=b[j])
		 i++,j++;
		else j++;
	}
	int r = n-i;
	cout<<r<<endl;
	 i=0;j=0;
	while(i<n && j<n)
	{
		if(a[i]<b[j])
		 i++,j++;
		else j++;
	}
	r = i;
	cout<<r<<endl;
}
