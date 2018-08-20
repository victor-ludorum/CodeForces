#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;    cin>>s;
	int n = s.length();
	char q = s[n-1];
	long long a =0,r=0;
	for(int i=0;i<n-1;++i)
	{
		a = a*10 + (s[i]-'0');
	//	cout<<a<<endl;
	}
//	cout<<a<<endl;
	map<char,int> m;
	m['f'] = 1; m['e'] = 2; m['d'] = 3; m['a'] = 4; m['b'] = 5; m['c'] = 6;
	
	if(a%4==0)
	{
		long long h = a/4;
		r = 16*(h-1) + 7 + m[q];
	}
	else if(a%4>0)
	{
		long long h = a/4;
		long long re = a%4;
		if(re&1)
		{
			r = 16*h + m[q];
		}
		else
		{
			r =16*h + 7 + m[q];
		}
	}
	
	cout<<r<<endl;
}
