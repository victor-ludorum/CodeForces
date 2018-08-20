#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,r;  cin>>s;
	int a=1,b=0;
	int n = s.length();
	for(int i=n-1;i>=0;--i)
	{
		if(s[i]==s[i-1])
		 a++;
		else
		 a=1;
		if(a>=3)
		s.erase(s.begin()+i);
	}
//	cout<<s<<endl;
	n = s.length();
	for(int i=n-1;i>=3;--i)
	{
		if(s[i]==s[i-1] && s[i-2]==s[i-3])
		s.erase(s.begin()+(i-2));
	}
	cout<<s<<endl;
}
