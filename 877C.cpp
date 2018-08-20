#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	cout<<n+1<<endl;
	if(n%2==0)
	{
	for(int i=1;i<=n/2;++i)
	{
		cout<<i<<" "<<n-i+1<<" ";
	}
	cout<<(n/2)<<endl;
    }
    else
    {
	for(int i=1;i<=n/2;++i)
	{
		cout<<i<<" "<<n-i+1<<" ";
	}
	cout<<(n/2 + 1)<<" "<<n/2<<endl;
    	
	}
}
