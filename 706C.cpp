#include <bits/stdc++.h>
using namespace std;
long long a[100005];
string s[2][100005];
long long u[1000][1000];
int main()
{
	int n;  cin>>n;
	for(int i=1;i<=n;++i)
	  cin>>a[i];
	 
	 for(int i=1;i<=n;++i)
	   {
	   	  cin>>s[0][i];
	   	  s[1][i] = s[0][i];
	   	  reverse(s[1][i].begin(),s[1][i].end());
	   }
	u[1][1] = a[1];
	for(int i=2;i<=n;++i)
	{
		for(int j=0;j<2;++j)
		{
			u[j][i] = 1e15;
			for(int k=0;k<2;++k)
			{
				if(s[k][i-1]<=s[j][i])
				u[j][i] = min(u[j][i],u[k][i-1] + j*a[i]);
			}
		}
	}
	long long r = min(u[0][n],u[1][n]);
	if(r==INT_MAX)
	cout<<"-1"<<endl;
	else
	cout<<r<<endl;
}
