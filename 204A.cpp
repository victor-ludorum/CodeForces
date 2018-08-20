#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll n)
{
	// if it is of single digit .
	if(n<10) return n;
	// result has been stored in 'r' variable
	ll r = n/10 + 9;
	// assigning one new variable y = n
    ll y = n;
	// this loop ends with corresponding
	// first digit of the number . 
	while(y>=10) y/=10;
	// here this condition is given so that
	// if first digit is greater than the last 
	// digit then our r (result) value is decremented 
	// because here we have added one more number with 
	// same first and last digit .
		if(y>n%10) r--;
	    return r;
}
int main()
{
	ll l,r;   cin>>l>>r;
	cout<<f(r) - f(l-1)<<endl;
}
