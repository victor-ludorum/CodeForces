#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<long,int> m;
  for(long int i=2;i<=1000000;++i)
  {
	m[i]++;
  }
    
  for(long int i=2;i*i<=1000000;++i)
	{
		if(m[i])
		{
			for(long int j=2*i;j<=1000000;j=j+i)
			      {
			          m[j] = 0;
			      }
		}
	}
	
     long t;   cin>>t;
	 while(t--)
	{
		 long l,r;  cin>>l>>r;
		 long s = 0;
		for(long i = l;i<=r;++i)
		{
		   if(m[i]>0||i==4)
		    s++;	
		}
		cout<<r-l+1-s<<endl;
	}
}
