#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;   cin>>s;
	int a=0,b=0;
	if(s.length()==1 && s[0]<='7')
	{
		if(s[0]<='4')
		cout<<"4";
		else 
		cout<<"7";
		return 0;
	}
	for(int i=0;i<s.length();i+=2)
	{
		if(s[i]<='4' && s[i+1]<='4')
		{
			if(a!=b)
		{		s[i] = '4'; s[i+1] = '4';  a=a+2;    } 
		else
		{
			s[i] = '4'; s[i+1] = '7';  a = a+1;  b=b+1;
		}
		}
		else if(s[i]<='4' && s[i+1]>'4')
		{
			s[i] = '4'; s[i+1] = '7';  a = a+1;  b=b+1;
		}
		else if(s[i]>'4' && s[i+1]<='4')
		{
			s[i] = '7'; s[i+1] = '4';  a = a+1;  b=b+1;
		}		
		else if(s[i]>'4' && s[i+1]>'4')
		{
			s[i] = '7'; s[i+1] = '7'; b = b+2;
		}			
	}
	if(a!=b)
	{
		for(int i=0;i<(s.length()/2)+1;++i)
		{
		   cout<<"4";	
		}
		for(int i=0;i<(s.length()/2)+1;++i)
		{
		   cout<<"7";	
		}
	}
	else
	cout<<s<<endl;
}
