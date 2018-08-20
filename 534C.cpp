#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,a;   cin>>n>>a;
	long long d[n+1],s=0;
	for(int i=0;i<n;++i)
	{
	  cin>>d[i], s+=d[i];
    }
	for(int i=0;i<n;++i)
	{
	   int l = max(1LL,a-(s-d[i]));
	   int r = min(0LL+d[i],a-(n-1));
	   int y = d[i] - (r-l+1);
	   cout<<y<<" ";
	}
	
}
