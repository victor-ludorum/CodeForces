#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;   cin>>s;
	string a;  cin>>a;
	int l=0,r;
	for(int i=0;i<s.length();++i)
	{
		if(s[i]=='|')
		break;
		else
		l++;
	}
	r = s.length() - l-1;
	if(l>r)
	{
		if(a.length()+r==l)
		{
			for(int i=0;i<s.length();++i)
			{
				cout<<s[i];
			}
			for(int i=0;i<a.length();++i)
			{
				cout<<a[i];
			}
		}
		else
		cout<<"Impossible"<<endl;
	}
	else if(l<r)
	{
		if(a.length()+l==r)
		{
			int i;
			for(i=0;i<s.length();++i)
			{
				if(s[i]=='|')
				break;
				
				cout<<s[i];
			}
			for(int j=0;j<a.length();++j)
			{
				cout<<a[j];
			}
			for(int k = i;k<s.length();++k)
			{
				cout<<s[k];
			}
		}
		else
		cout<<"Impossible"<<endl;		
	}
		else
		cout<<"Impossible"<<endl;			
}
