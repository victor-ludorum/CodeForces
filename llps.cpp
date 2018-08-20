#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;   cin>>s;
	map<char,int> m;
	for(int i=0;i<s.length();++i)
	{
		m[s[i]]++;
	}
	char a = *max_element(s.begin(),s.end());
	int l = m[a];
	for(int i=0;i<l;++i)
	{
		cout<<a;
	}
}
