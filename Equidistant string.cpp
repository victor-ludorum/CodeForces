#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t,r;  cin>>s>>t;
	int c=0;
	for(int i=0;i<s.length();++i)
	{
		if(s[i]!=t[i])
		c++;
	}
	if(c&1)
	cout<<"impossible"<<endl;
	else
	{
        int k=0;
        for(int i=0;i<s.length();++i)
        {
        	if(s[i]==t[i])
        	  r+=s[i];
        	else if(s[i]!=t[i])
			{
			   if(k&1)
			   {
			   	 r+=s[i]; k++;
			   }	
			   else
			   {
			   	r+=t[i]; k++;
			   }	   
			}  
		}
	}
	cout<<r<<endl;
}
