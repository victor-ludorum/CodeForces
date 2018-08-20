#include <bits/stdc++.h>
using namespace std;
int a[100003];
int main()
{
	int t;  cin>>t;
	while(t--)
	{
	
	int n;  cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
	}
	int x=0,y=0,z=0;
	int i=1,j=1,k=1;
	for(i=1;i<=n;++i)
	{
		if(a[i]>a[i-1])
		x++;
		else
		break;
	}
	for(j=i;j<=n;++j)
	{
		if(a[j]==a[j-1])
		y++;
		else
		break;
	}
	for(k=j;k<=n;++k)
	{
		
		if(a[k]<a[k-1])
		z++;
		else
		break;
	}
//	cout<<x<<" "<<y<<" "<<z<<endl;
	if(((x+y+z)==n) || n==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
    }
}
