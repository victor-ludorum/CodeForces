#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	int a[n],b[n],c[n];
	bool flag = true;
	for(int i=0;i<n;++i)
	{
		cin>>a[i]>>b[i];
		c[i]=a[i];
		if(b[i]-a[i]!=0)
		flag = false;
	}
	if(flag)
	{
		sort(a,a+n);
		int h=0;
		for(int i=n-1;i>=0;--i)
		{
			
			if(c[i]==a[n-i-1])
			h++;
		//	cout<<"hello"<<endl;
		}
	//	cout<<h<<endl;
		if(h==n)
		cout<<"maybe"<<endl;
		else
		cout<<"unrated"<<endl;
	}
	else
	cout<<"rated"<<endl;
}
