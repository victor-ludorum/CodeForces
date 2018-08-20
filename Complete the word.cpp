#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;   cin>>s;
	string a = s;
//	cout<<a<<endl;
	int q=0,c=0;
	map<char,int> m;
	vector<int> v;
	
	for(int i=0;i<s.length();++i)
	{
		if(s[i]=='?')
		{
			q++;
			v.push_back(i);
		}
		else if(m[s[i]]<1)
		{
			c++; m[s[i]]++;
	        if(q+c==26) 
			break;			
		}
		else if(m[s[i]]>0)
		{
			c=0;q=0;  v.empty();
		}
	}
//	cout<<q<<" "<<c<<endl;
	if((q+c)==26)
	{
		int k=0;
	  for(char c='A';c<='Z';++c)
	  {
	     if(m[c]==0)
		 	s[v[k++]] = c;
	  }	
	  for(int i=0;i<s.length();++i)
	  {
	  	  if(s[i]=='?')
	  	   s[i]='A';
	  }
	  cout<<s<<endl;
	}
	else if(1)
	{
		map<char,int> m1;
		v.clear(); q=0;c=0;
	for(int i=a.length();i>=0;--i)
	{
		if(a[i]=='?')
		{
			q++;
			v.push_back(i);
		}
		else if(m1[a[i]]<1)
		{
			c++; m1[a[i]]++;
		}
		else if(m1[a[i]]>0)
		{
			c=0;q=0;  v.empty();
		}
//			cout<<q<<" "<<c<<endl;
			if(q+c==26)
			break;
	}
  
	if((q+c)==26)
	{
		int k=v.size();
	  for(char c='A';c<='Z';++c)
	  {
	     if(m1[c]==0)
		 	a[v[k--]] = c;
	  }	
	  for(int i=0;i<a.length();++i)
	  {
	  	  if(a[i]=='?')
	  	   a[i]='A';
	  }
	  cout<<a<<endl;
	}
	else
	cout<<"-1"<<endl;
   }
}
