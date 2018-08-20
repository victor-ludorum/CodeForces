#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c,d;   cin>>t>>a>>b>>c>>d;
	string s;    cin>>s;
	int h,g,r1,r2;
	if(c-a<0)
	{
		h = abs(a-c);
		int q=0,i;
	for( i=0;i<s.length();++i)
	{
	  	if(s[i]=='W')
	  	{
	  		q++;
	  		if(q==h) break;
		}
	}
	if(q==h)
	{
		r1 = i;
	}
	else
	{
		cout<<"-1"<<endl;   return 0;
	}
	
    }
    
    else if(c-a>0)
    {
    	h = abs(c-a);
    	int q=0,i;
	for(i=0;i<s.length();++i)
	{
		if(s[i]=='E')
		{
			q++;
				if(q==h) break;
		}
	}
	if(q==h)
	{
		r1 = i;
	}
	else
	{
		cout<<"-1"<<endl;   return 0;
	}	
    }
    else if(c-a==0)
    r1 = 0;
    
    // second condition ..
    
    if(d-b<0)
    {
		g = abs(d-b);
		int q=0,i;
	for( i=0;i<s.length();++i)
	{
	  	if(s[i]=='S')
	  	{
	  		q++;
	  		if(q==g) break;
		}
	}
	if(q==g)
	{
		r2 = i;
	}
	else
	{
		cout<<"-1"<<endl;   return 0;
	}
    	
	}
	else if(d-b==0)
	r2 = 0;
	else
	{
		g = abs(d-b);
		int q=0,i;
	for( i=0;i<s.length();++i)
	{
	  	if(s[i]=='N')
	  	{
	  		q++;
	  		if(q==g) break;
		}
	}
	if(q==g)
	{
		r2 = i;
	}
	else
	{
		cout<<"-1"<<endl;   return 0;
	}		
	}
	cout<<max(r1,r2)+1<<endl;
}
