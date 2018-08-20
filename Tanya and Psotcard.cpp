#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,a;   cin>>s>>a;
	map<int,int> m1;
	map<int,int> m2;
	for(int i=0;i<a.length();++i)
	{
		m1[a[i]-'0']++;
	}
	int p=0,q=0;
	for(int i=0;i<s.length();++i)
	{
		if(m1[s[i]-'0']>0)
		{
			p++;  m1[s[i]-'0']--;  m2[i]++;
		}		
	}
	for(int i=0;i<s.length();++i)
	{
		if(m2[i]<1)
		{
	       if(m1[s[i]-'0'+32]>0)
		  {
			q++;  m1[s[i]-'0'+32]--;
		  }
		else if(m1[s[i]-'0'-32]>0)
		  {
			q++;  m1[s[i]-'0'-32]--;
		  }					
		}
	}
	cout<<p<<" "<<q<<endl;
}
