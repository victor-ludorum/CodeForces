#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	ll n,m;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	ll inversion=0;
	for(ll i=0;i<n;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
				inversion++;
		}
	}
	cin>>m;
	while(m--)
	{
		ll li,ri;
		cin>>li>>ri;
		li--;ri--;
		inversion=inversion+((ri-li+1)*(ri-li))/2;
		if(inversion%2)
			cout<<"odd"<<endl;
		else cout<<"even"<<endl;
	}
}
