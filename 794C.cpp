#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,t,f;   cin>>s>>t;
	sort(s.begin(),s.end()); sort(t.begin(),t.end());
    reverse(t.begin(),t.end());
    int k=0,l=0,i;
	for(i=0;i<s.length();++i)
	{
		if(i&1)
		{
			f+=t[l++];
		}
		else
		{
	      if(s[k]<=t[l])
	      f+=s[k++];
		  else
		  break;
		}
	}
	if((l-i)%2==0) 
	{
		if(i&1)
		{
			f+=s[k++];
		}
		else
		{
	      f+=t[l++];
		}     	
		i++;
		
       for(;i<s.length();++i)
      {
		if(i&1)
		{
			f+=t[l++];
		}
		else
		{
	        f+=s[k++];
		}     	
	  }
    }
    else
    {
        for(;i<s.length();++i)
      {
		if(i&1)
		{
			f+=t[l++];
		}
		else
		{
	        f+=s[k++];
		}     	
	  }
    	
	}
	cout<<f<<endl;
}
