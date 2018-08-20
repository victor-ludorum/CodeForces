#include <bits/stdc++.h>
using namespace std;
long long a[100005],p[100005];
int main()
{
	int t,k;  cin>>t>>k;
	p[0] = 1;
	for(long i=1;i<=100000;++i)
	{
		if(i<k)
		{
			a[i] = a[i-1] + 1;  p[i] =p[i-1];
		}
		else if(i>=k)
		 p[i] = ( p[i-1]%(1000000007) + p[i-k]%(1000000007) )%(1000000007),  a[i] = ((a[i-1]%(1000000007)) + (p[i]%(1000000007)))%(1000000007);
	}
	while(t--)
	{
		int ai,b;   cin>>ai>>b;
		cout<<(a[b]%(1000000007)-a[ai-1]%(1000000007) + 1000000007)%(1000000007)<<endl;
	}
}

