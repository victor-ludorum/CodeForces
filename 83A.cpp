#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;   cin>>n;
	ll a[n+1], c=1, r=0;
	vector<ll> v;
	a[0] = INT_MIN;
	for(int i=1;i<=n;++i)
	{
		cin>>a[i];
		if(a[i-1]==a[i])
		r++,c++;
		else
		{
	    r = r + (c*(c - 1))/2;			
	    v.push_back(a[i]);  c=1;
	    }	    
	}
	    r = r + (c*(c - 1))/2 + v.size();				
	  cout<<r<<endl;
}
