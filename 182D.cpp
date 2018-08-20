#include <bits/stdc++.h>
using namespace std;
string a,b;
bool check(string s,int m)
{
	for(int i=0;i<s.length();++i)
	{
		if(a[i%m]!=s[i])
		return false;
	}
	return true;
}
int main()
{
	   cin>>a>>b;
	int mn = min(a.length(),b.length());
	int c=0;
	for(int i=1;i<=mn;++i)
	{
		if(a.length()%i==0 && b.length()%i==0)
		{
			if( check(a,i) && check(b,i) )
			  c++;
		}
	}
	cout<<c<<endl;
}
