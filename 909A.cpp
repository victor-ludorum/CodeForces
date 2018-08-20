#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,r;   cin>>a>>b;
	r+=a[0];
	for(int i=1;i<a.length();++i)
	{
		if(a[i]<b[0])
		r+=a[i];
		else
		break;
	}
	r+=b[0];
	cout<<r<<endl;
}
