#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;    cin>>n>>k;
	
	if(n==1 && k>=1)
	cout<<"-1"<<endl;
	else if(k>n-1)
	cout<<"-1"<<endl;
	else
	{
		int a[n+1];
		for(int i=1;i<=n;++i)
		a[i] = i;
		if((n-(k+1))%2==0)
		{
		for(int i=k+2;i<=n-1;i+=2)
		swap(a[i],a[i+1]);
	    }
	    else
	    {
		for(int i=k+2;i<=n-1;i+=2)
		swap(a[i],a[i+1]);
		swap(a[1],a[n]);	    	
		}
		for(int i=1;i<=n;++i)
		cout<<a[i]<<" ";
	}
}
