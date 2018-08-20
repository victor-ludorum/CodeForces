#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,s,r;  cin>>a>>b>>s;
	map<char,char> m;
	for(int i=0;i<a.length();++i)
	{
		m[a[i]] = b[i];
	}
	for(int i=0;i<s.length();++i)
	{
		if(s[i]>='a' &&s[i]<='z')
		 r+=m[s[i]];
        else if(s[i]>='A' &&s[i]<='Z')
		 {
		 	char f = (char)(s[i] + 32);
		 	char g = (char)(m[f] - 32);
		 	r+=g;
		 //	cout<<f<<" "<<g<<endl;
		 }
		 else
		 r+=s[i];		
	}
	cout<<r<<endl;
}
