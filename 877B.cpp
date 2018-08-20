#include <bits/stdc++.h>
using namespace std;
int main()
{
//	int t;  cin>>t;
//	while(t--)
//	{	
	string s;   cin>>s;
	if(s[0]=='a')
	{
		int i,mx =0,c=0,in; bool flag = true;
		for(i=0;i<s.length();++i)
		{
			if(s[i]=='b' && s[i+1]=='a')
			{
				in = i;
				flag = false;
			}
			else if(s[i]=='a' && s[i+1]=='b' && flag==false)
			{
				flag = true;
				mx = max(mx,c+1);
				c=(i-in-1);
			}
			c++;
			mx = max(mx,c);
		}
		cout<<mx<<endl;
	}
	else if(s[0]=='b')
	{
		int i,c=0,mx=0,in; bool flag = true;
		for(i=0;i<s.length();++i)
		{
			if(s[i]=='b' && s[i+1]=='a')
			{
				in = i;
				flag = false;
			}
			else if(s[i]=='a' && s[i+1]=='b' && flag==false)
			{
				flag = true;
				mx = max(mx,c+1);
				c=(i-in-1);
			}
			c++;
			mx = max(mx,c);
		}
		
		cout<<mx<<endl;
	}
 //  }
}
