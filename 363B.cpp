#include <bits/stdc++.h>
using namespace std;
int a[200006];
int main()
{
	int n,k;  cin>>n>>k;
	for(int i=1;i<=n;++i)
	  cin>>a[i];
	  int m = INT_MAX; int s=0;
	  for(int i=1;i<=k;++i)
	  s = s+ a[i];
	  int r; if(s<m) m = s, r=1;
	for(int i=2;i<=n-k+1;++i)
	{
	  	s = s + a[k+i-1] - a[i-1];
	//  	cout<<s<<endl;
	    if(s<m) m = s, r=i;
	}  
	cout<<r<<endl;
}
