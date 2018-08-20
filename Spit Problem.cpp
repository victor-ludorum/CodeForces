#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n],b[n];
	map<int,int> m;
	for(int i=-10000;i<=10000;++i)
	{
		m[i] = -99999;
	}
	bool flag = false;
	for(int i=0;i<n;++i)
	{
		cin>>a[i]>>b[i];
		int f = a[i] + b[i];
		m[a[i]] = f;
		
		if(m[f]==a[i])
		{
		//	cout<<m[f]<<" "<<a[i]<<" "<<endl;
			flag = true;
		}
	}
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
}
