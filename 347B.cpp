#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n+1];
	for(int i=0;i<n;++i)   cin>>a[i];
	int c=0;  bool flag = false, fg = false;
	for(int i=0;i<n;++i)
	{
		if(a[i]==i)
		c++;
		else
		{
			fg = true;
			int h = a[i];
			if(a[h]==i)
			flag = true;
		}
	}
	if(flag && fg)
	cout<<c+2<<endl;
	else if(fg)
	cout<<c+1<<endl;
	else
	cout<<c<<endl;
}
