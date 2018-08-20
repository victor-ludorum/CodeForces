#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	int x;  cin>>x;
	int a[n],b[n];
	bool flag = true;
	for(int i=0;i<n;++i)
	{
		cin>>a[i]>>b[i];
		if(a[i]==x||b[i]==x||a[i]==(7-x)||b[i]==(7-x))
		flag = false;
	}
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}

