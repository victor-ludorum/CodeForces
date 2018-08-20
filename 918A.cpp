#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long f[2];
	bool g[10004];
	f[1] = 1; g[1] = true;
	f[2] = 1;
    while(f[2]<=1000)
	{
		long h = f[2];
		f[2] = f[1] + f[2];
		f[1] = h;
		g[f[2]] = true;
	}
	int n;  cin>>n;
	string r="";
	for(int i=1;i<=n;++i)
	{
		if(g[i])
		r+="O";
		else
		r+="o";
	}
	cout<<r<<endl;
}
