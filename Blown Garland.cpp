#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;   char m[5];
	cin>>s;
	int x=0,y=0,z=0,w=0;
	int c=0;
	for(int i=0;i<s.length();++i)
	{
	   if(s[i]!='!')
	   {	   	 
	   	  m[c]=s[i];
	   	  c++;
	   	  if(c==4)
	   	  c=0;	   	 
	   }
	   else
	   {
	   	  c++;
	   	  if(c==4)
	   	  c=0;
	   }
	}
	char q[5]= {'R','B','Y','G'};
	c=0;
	map<char,int> ma;
	for(int i=0;i<s.length();++i)
	{
		if(s[i]=='!')
		{
		   ma[m[c]]++;   c++;	
	   	  if(c==4)
	   	  c=0;	   	 		   
		}
		else
		{
			c++;
	   	   if(c==4)
	   	   c=0;	   	 			
		}
	}
	for(int i=0;i<4;++i)
	{
		cout<<ma[q[i]]<<" ";
	}
}
