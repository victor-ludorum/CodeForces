#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int n;  cin>>n;
	vector<ll> a;
	 for(int i=0;i<n;++i)
	 {
	   ll x;   cin>>x;  a.push_back(x);
     }
     ll mx = *max_element(a.begin(),a.end());
     ll mn = *min_element(a.begin(),a.end());
     ll g = mn;
     for(int i=0;i<n;++i)
     {
     	g = __gcd(g,a[i]);
	 }
     ll c= mx/g - n;
	if(c%2!=0)
	cout<<"Alice"<<endl;
	else
	cout<<"Bob"<<endl;
}
