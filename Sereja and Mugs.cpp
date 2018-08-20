#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;   cin>>n>>s;
	int a[n-1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	sort(a,a+n-1);
	int v = 0;
	bool flag = true;
	for(int i=0;i<n-1;++i)
	{
		v = v + a[i];
		if(v>s)
		{
			flag = false;  break;
		}
	}
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
