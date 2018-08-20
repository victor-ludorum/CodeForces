#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll r,g,b;   cin>>r>>g>>b;
	ll r0 = min(r,min(g,b));
	ll a = r%3;
	ll r1 = (g-a)/3 + (b-a)/3 + r/3 + (r0 > 0 ? a : 0) ;
	ll e = g%3;
	ll r2 = (r-e)/3 + (b-e)/3 + g/3 + (r0 > 0 ? e : 0) ;
	ll f = b%3;
	ll r3 = (r-f)/3 + (g-f)/3 + b/3 + (r0 > 0 ? f : 0);
//	cout<<r0<<" "<<r1<<" "<<r2<<" "<<r3<<endl;
	cout<<max(max(r1,r0),max(r2,r3))<<endl;
}
