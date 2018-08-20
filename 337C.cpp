#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define M 1000000009
int main()
{
	ll n,m,k;    cin>>n>>m>>k;
	ll q = m/(k-1);
	ll g = n/k;
	if(n==m && n==k)
	{
		cout<<n*n<<endl;  return 0;
	}
	if( (q+q-1 <= n && m%(k-1)==0) || m<=k || m<=n-g)
	{
		cout<<m<<endl;
	}
	else
	{
		ll r = n-m, p=1,res=0;
		string s;
		for(ll i=1;i<=n;++i)
		{
		   if(r>0)
		   {
		   	if(p!=0)
		   	{
		   	  s+='1';
		    }
		      p++;
		   	if(p==k)  p=1,r--,s+='0'; 	  
		   	if(r==0) s+='0';
		   	
		   }
		   else
		   {
		   	if(p!=k)
		   	{
		   	  s+='1';
		    }
		    else 
		    {
		      s+='0';
			}
			if(p==k) p=1;
			else
			p++;  
			//	 cout<<res<<endl;	     	
		   }
		  
		}
		cout<<res<<endl;
	}
}
