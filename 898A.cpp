#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;   cin>>n;
	if(n%10==0 || n%10==5)
	cout<<n-(n%10)<<endl;
	else
	{
		int r = n%10;
		if(r<5)
		cout<<n-r<<endl;
		else
		cout<<(n-r+10)<<endl;
	}
}
