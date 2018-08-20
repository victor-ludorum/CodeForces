#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k;   cin>>n>>m>>k;
	int d = n*m;
	int s = (n*m)/k; int c=0;
	int e = n*m - s*k;
	bool flag = false;
	if(e!=0)
	  flag = true;
	cout<<s<<" ";
	if(!flag)
	{
	
	for(int i=1;i<=n;++i)
	{
		if(i&1)
		{
		
		for(int j=1;j<=m;++j)
		{
		   if(c<s)
		   {
		     	cout<<i<<" "<<j<<" "; c++; 
		   }	
		   else 
		   c=1,cout<<endl,cout<<s<<" ",cout<<i<<" "<<j<<" ";
		}
		
	    }
	    else
	    {
		for(int j=m;j>=1;--j)
		{
				
		   if(c<s)
		   {
		     	cout<<i<<" "<<j<<" "; c++; continue;
		   }	
		   else 
		   c=1,cout<<endl,cout<<s<<" ",cout<<i<<" "<<j<<" ";
	         
		}
	     	
		 }
	}
	
    }
    
    else
    {
    	
	 bool f = false;
	for(int i=1;i<=n;++i)
	{
		if(i&1)
		{
		
		for(int j=1;j<=m;++j)
		{
		   if(c<s)
		   {
		     	cout<<i<<" "<<j<<" "; c++; d--; continue;
		   }	
		   else if(d!=s+e)
           {
		    c=1;  cout<<endl; cout<<s<<" "; cout<<i<<" "<<j<<" ";  d--;continue; 
		   }
		     if(d==s+e && !f)
	            cout<<endl,cout<<s+e<<" ",cout<<i<<" "<<j<<" ",f=true;  
	       else if(d==s+e && f)
	       {
	       	 cout<<i<<" "<<j<<" "; 
		   }			  
		}
		
	    }
	    else
	    {
		for(int j=m;j>=1;--j)
		{
				
		   if(c<s)
		   {
		     	cout<<i<<" "<<j<<" "; c++;  d--;continue;
		   }	
		   else if(d!=s+e)
		  {
		    c=1;cout<<endl;cout<<s<<" ";cout<<i<<" "<<j<<" ";  d--;continue;
		  }
	          if(d==s+e && !f)
	            cout<<endl,cout<<s+e<<" ",cout<<i<<" "<<j<<" ",f=true;
	       else if(d==s+e && f)
	       {
	       	 cout<<i<<" "<<j<<" "; 
		   }
		}
	     	
		}
	}
    	
	}
}
