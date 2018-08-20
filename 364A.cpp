#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll b[4005][4005];
int main()
{
	ll a;  cin>>a;  string s;  cin>>s;
	int n = s.length();

	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			b[i+1][j+1] = (s[i]-'0')*(s[j]-'0'); 
		}
	}
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		cout<<b[i][j]<<" ";
		cout<<endl;
	}
	ll r=0;
	for(int i=1;i<n;++i)
	{
		for(int j=1;j<n;++j)
		{
			if(b[i][j]+b[i+1][j]+b[i][j+1]+b[i+1][j+1]==a)
			r++;
		}
	}
	cout<<r<<endl;
}
