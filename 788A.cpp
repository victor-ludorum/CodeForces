#include <bits/stdc++.h>
using namespace std;
long long a[100005],b[100005];
int main()
{
	int n;  cin>>n;
	for(int i=1;i<=n;++i)
	  cin>>a[i];
	  
	for(int i=1;i<=n-1;++i)
	b[i] = abs(a[i]-a[i+1]);
	
	long long s = b[1]; long long m = b[1];
	for(int i=2;i<=n-1;++i)
	{
	   if(i%2==0)
	   {
	   	 s = s-b[i];
	   	 if(s>0)
	   	 m = max(m,max(s,b[i]));
	   	 else
	   	 s =0;
	   }
	   else
	   {
	   s = s + b[i];
	   m = max(m,s);
       }
	}
	   long long k = b[2]; s=b[2];
		for(int i=3;i<=n-1;++i)
	{
	   if(i%2!=0)
	   {
	   	 s = s-b[i];
	   	 if(s>0)
	   	 k = max(k,max(s,b[i]));
	   	 else
	   	 s =0;
	   }
	   else
	   {
	   s = s + b[i];
	   k = max(k,s);
       }
	}
	cout<<max(m,k)<<endl;
}
