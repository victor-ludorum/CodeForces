#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;  cin>>n;
   vector<int> a,b;
   for(int i=0;i<n;++i)
   {
   	int x,y;  cin>>x>>y;  a.push_back(x);  b.push_back(y); 
   }
   bool flag = false;
   string p;
   long long s=0,k=0;
   if(a[0]<=500)
    s =a[0], p+='A';
   else
    k =b[0], p+='G';
   for(int i=1;i<n;++i)
   {
     	if(s+a[i]-k<=500)
     	  {
     	     s =  s + a[i]; p+='A';	
		  }
		else if(k+b[i]-s<=500)
		{
	         k = k + b[i];  p+='G';
		}
		else
    {	flag = true; break; }
   }	
   if(flag)
   cout<<"-1"<<endl;
   else
   cout<<p<<endl;
}
