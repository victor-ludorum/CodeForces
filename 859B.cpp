#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	int m = INT_MAX;
	for(int i=1;i<=n;++i)
	{
		m = min(m,2*(i + (n+i-1)/i));
	}
	cout<<m<<endl;
}
