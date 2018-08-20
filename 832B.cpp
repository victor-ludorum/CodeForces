#include <bits/stdc++.h>
using namespace std;
int main()
{
	string g,p;  cin>>g;
	map<char,int> m;
	for(int i=0;i<g.length();++i)
	  {
	  	 m[g[i]]++;
	  }
	cin>>p;
	vector<int> v;  int in; bool fl1 = false;
	for(int i=0;i<p.length();++i)
	{
		if(p[i]=='?')
		  v.push_back(i);
		if(p[i]=='*')
          in = i, fl1 = true;		  
	}
	int n;  cin>>n;
	while(n--)
	{
		string x;   cin>>x;  bool flag = true;
		
		if(x.length()>p.length() && !fl1)
		{
			cout<<"NO"<<endl;  continue;			
		}
		
		if(x.length()<p.length())
		{
			int j=0;
		  for(int i=0;i<p.length();++i)
		   {
		      if(p[i]=='?') 
			  {
			  	  if(m[x[j]] < 1)
			  	  {
			  	  	flag = false;  break;
				  }		  
			  }
			  else if(p[i]=='*')
			  {
			  	continue;
			  } 	
			  else if(p[i]!=x[j])
			  {
			  	flag = false;  break;	
			  }
			  j++;
		   }	
		}
		else
		{
			
			int h = x.length() - p.length();
			if(fl1)
			{
		       for(int i=0;i<in;++i)
		     {
		      if(p[i]=='?') 
			  {
			  	  if(m[x[i]] < 1)
			  	  {
			  	  	flag = false;  break;
				  }
			  }
			  else if(p[i]!=x[i])
			  {
			  	flag = false;  break;	
			  }	
		    }
		  
		     int i=0;
		  for(i=in;i<=in+h;++i)
		  {
		 // 	cout<<flag<<" "<<x[i]<<endl;
		  	       if(m[x[i]]>0)
			  	  {
			  	  	flag = false;  break;
				  }		  	
		  }	
		    i = i-h;
		   int j = i+h;
		  
		  for(;i<p.length();++i)
		  {
		//  	 cout<<j<<" "<<i<<endl;
		      if(p[i]=='?') 
			  {
			  	  if(m[x[j]] < 1)
			  	  {
			  	  	flag = false;  break;
				  }
			  }
			  else if(p[i]!=x[j])
			  {
			  	flag = false;  break;	
			  }
			  j++;			  	
		  }
	     }
	     else
	     {
		    for(int i=0;i<x.length();++i)
		   {
		      if(p[i]=='?') 
			  {
			  	  if(m[x[i]] < 1)
			  	  {
			  	  	flag = false;  break;
				  }
			  }
			  else if(p[i]!=x[i])
			  {
			  	flag = false;  break;	
			  }			  	
		   }	     	
		 }
	     
		}		
		if(!flag)
		{
			cout<<"NO"<<endl;  continue;
		}
		else
		{
			cout<<"YES"<<endl;  continue;
		}
		
	}
}
