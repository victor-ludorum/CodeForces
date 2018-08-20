#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	long r=1;
	for(int i=1;i<=n;++i)
	{
		r = r + i*(n-i);
		r++;
	}
	cout<<r<<endl;
}
