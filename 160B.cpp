#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	char a[n+1],b[n+1];
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;++i)
	{
		cin>>b[i];
	}
	sort(a,a+n+1);
	sort(b,b+n+1);
	int c=0,c1=0;
	for(int i=1;i<=n;++i)
	{
		if(a[i]>b[i])
		c++;
		else if(b[i]>a[i])
		c1++;
	}
	if(c==n || c1==n)
	  cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
