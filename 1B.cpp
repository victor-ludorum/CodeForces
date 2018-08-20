#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	while(n--)
	{
		string s;   cin>>s;  int c=0;
		for(int i=0;i<s.length();++i)
		  {
		  	if ((s[i]>='A' && s[i]<='Z') && (s[i+1]>='0' && s[i+1]<='9')) c++;
		  }
		  if(c==1)
		  {
		  	string a,d;   int i;
		  	
		  	for(i=0;i<s.length();++i)
		  	{
		  		if((s[i]>='0' && s[i]<='9'))
		  		break;
		  		else
		  		a+=s[i];
			}
			
			for(;i<s.length();++i)
			d+=s[i];
			
			int h,k=0;
			if(a.length()>1)
			{
			 h = (int)(a[0]) - 64;
			 k= 26*h;
		    }
			for( i=1;i<a.length()-1;++i)
			   {
			   	   h = (int)(a[i]) - 64;
			   	  k = k*(h+26);
			   }
			    h = (int)(a[a.length()-1]) - 64;
			   k = k + h;
			   
			   cout<<"R"<<d<<"C"<<k<<endl;
		  }
		  else
		  {
		  	string a,f; int i;
		  	
		  	for(i=1;i<s.length();++i)
		  	{
		  		if((s[i]>='A' && s[i]<='Z')) break;
		  		else
		  		a+=s[i];
			}
			i++;
			
			int l=0;
			for(;i<s.length();++i)
			{
				l = l*10 + (int)(s[i]-'0');
			}
			    int re = l%26;
			  	if(re!=0)
			  	{
			  	char b = (int)(re + 64);
			  	f+=b;
			  	l = l-re;
			  	l = l/26;			  	
			    }
			     else
			     {
			  	  re =  26;			     	
			  	  char b = (int)(re + 64);
			  	 f+=b;
			  	 l = l-re;
			  	 l = l/26;			  	
				 }
			while(l>0)
			{
				re = l%26;
			  	if(re!=0)
			  	{
			  	char b = (int)(re + 64);
			  	f+=b;
			  	l = l-re;
			  	l = l/26;			  	
			    }
			     else
			     {
			  	re =  26;			     	
			  	char b = (int)(re + 64);
			  	f+=b;
			  	l = l-re;
			  	l = l/26;			  	
				 }
			}
			
			reverse(f.begin(),f.end());
			cout<<f<<a<<endl;
		  }
	}
}
