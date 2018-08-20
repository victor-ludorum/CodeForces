#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long n,m,k;
long long count(int x,int y)
{
	if(n==1)
	return k/m + (k%m>=y);
	ll periods = (n*m) + (n-2)*m;
	ll trip = k/(periods);
	ll rem = k%periods;
	ll need1 = (x-1)*m + y;
	ll need2 = (n-x-1)*m + y;
	if(x==1 || x==n)
	  return trip + (need1<=rem);
	return 2*trip + (need1<=rem) + (n*m + need2<=rem);
}
int main()
{
	int x,y;   cin>>n>>m>>k>>x>>y;
	cout<<max(count(1,1),max(count(2,1),count(n-1,1)))<<" "<<count(n,m)<<" "<<count(x,y)<<endl;
}
