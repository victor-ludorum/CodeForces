#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;  cin>>s; int n= s.length();
	
		for(int i=0;i<n;++i)
		{
			for(int j=i+1;j<n;++j)
			{
				for(int k=j+1;k<n;++k)
				{
					int h = (int)(s[i]-'0')*100 + (int)(s[j]-'0')*10 + (int)(s[k]-'0');
					if(h%8==0)
					{
						cout<<"YES"<<endl<<h<<endl;  return 0;
					}
				}
			}
		}
		
		for(int i=0;i<n;++i)
		{
			for(int j=i+1;j<n;++j)
			{
					int h = (int)(s[i]-'0')*10 + (int)(s[j]-'0')*1;
					if(h%8==0)
					{
						cout<<"YES"<<endl<<h<<endl;  return 0;
					}					
			}
		}
		  for(int i=0;i<n;++i)
		  {
		  	        int h = (int)(s[i]-'0')*1;
					if(h%8==0)
					{
						cout<<"YES"<<endl<<h<<endl;  return 0;
					}							  	  
		  }
		  cout<<"NO"<<endl;
}
