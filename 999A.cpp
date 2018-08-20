#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	int n,k;   cin>>n>>k;
	int a[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int s=0,l=n-1,c=0;
	while(a[s]<=k || a[l]<=k)
	{
		if(a[s]<=k && s<l)
		{
			s++; c++;
		}
		if(a[l]<=k && l>s)
		{
			l--; c++;
		}
		if((a[s]>k && a[l]>k ))
		break;
		if(s==l)
		{
			if(a[s]<=k)
			c++;
			break;
		}		
	//	cout<<s<<" "<<l<<endl;
	}
	cout<<c<<endl;
}
