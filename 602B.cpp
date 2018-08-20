#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
	int n;  cin>>n;
	for(int i=1;i<=n;++i)
	   cin>>a[i];
	map<int,int> m; int r=0;
	for(int i=1;i<=n;++i)
	{
		m[a[i]]++; m[a[i]+1]++;
		r = max(r,max(m[a[i]],m[a[i]+1]));
	}
	cout<<r<<endl;
}
