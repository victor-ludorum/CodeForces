
/*
#include <bits/stdc++.h>
using namespace std;
int a[1000005],b[2000005];
int main()
{
	
	int n;   cin>>n;
	for(int i=0;i<n;++i)
	{
		int x;   cin>>x;  a[x] = x;
	}
	for(int i=1;i<=1000000;++i)
	{
		if(a[i]==0)
		a[i] = a[i-1];
	}
	int r =0;
	for(int i=1;i<=1000000;++i)
	{
		if(a[i]==i)
		 {
// Here we can also check till the maximum number among array...		
		for(int j=2*i;j<=2000000;j+=i)
		{
		   r = max(r,a[j]%i);	
		}
	     }
	}
	cout<<r<<endl;
}
*/
#include <iostream>
#include <stdio.h>

using namespace std;

int a,b[2000002];
int n,i,j,ans,mx;

main()
{
 cin>>n;
 for (i=1;i<=n;i++)
 {
    scanf("%d",&a),b[a]=a;
    mx = max(mx,a);
}
 for (i=1;i<=2*mx;i++)
    if (b[i] == 0) b[i]=b[i-1];
 for (i=2;i<=mx;i++)
  if (b[i] == i)
   for (j=2*i-1;j<=2*mx;j+=i)
    if (i <= b[j] && ans < b[j]%i) ans=b[j]%i;
  cout<<ans<<endl;
}
