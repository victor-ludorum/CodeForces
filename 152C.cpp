#include <bits/stdc++.h>
using namespace std;
long long c[106];
string s[102];
int main()
{
	int n,ma;    cin>>n>>ma;
	
	for(int i=0;i<n;++i)
	cin>>s[i];
	for(int i=0;i<ma;++i)
	{
		map<char,int> m;
		for(int j=0;j<n;++j)
		{
			if(m[s[j][i]]<1)
		    c[i]++, m[s[j][i]]++;
		}
	}
	long long r = 1;
	for(int i=0;i<ma;++i)
	{
		r = (r*c[i])%(1000000007);
	}
	cout<<r<<endl;
}
