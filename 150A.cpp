#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> s;
bool prime(ll p)
{
	for(ll i=2;i<=sqrt(p);++i)
	{
		if(p%i==0)
		return false;
	}
	return true;
}
bool divCount(ll n)
{
	int c=0;
	if(n%2==0)
	{	
		while(n%2==0)
		n = n/2,c++,  s.push_back(2);;
		
   	  if(c>2)
   	  return true; 
	}
   for(ll i=3;i<=(ll)sqrt(n);i=i+2)
   {
   	  if(n%i==0)
   	  {
   	     while(n%i == 0)
			{
			  	n = n/i;	
			  	c++;   s.push_back(i);
			}	
	  }  	  
   	  if(c>2)
   	  return true; 
   }
   if(n>2)
   {
   	  c++; s.push_back(n);
   	  if(c>2)
   	  return true;    	 
   }
   return false;
}
int main()
{
	ll q;  cin>>q;
	if(q==1 || prime(q))
	{
		cout<<"1"<<endl;
		cout<<"0"<<endl;  return 0;
	}
	if(divCount(q))
	{
		cout<<"1"<<endl;
		ll pr =1;
		for(int i=0;i<2;++i)
		pr = pr*s[i];
		cout<<pr<<endl;
	}
	else
	cout<<"2"<<endl;
}
