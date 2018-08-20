#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;  cin>>s;
	map<string,int> m;
	for(int i=0;i<10;++i)
	{
		string a;  cin>>a;
		m[a] = i;
	}
	for(int i=0;i<8;++i)
	{
		cout<<m[s.substr(10*i,10)];
	}
}
