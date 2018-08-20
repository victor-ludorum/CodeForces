#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	vector<long> a,b;
	for(int i=0;i<n;++i)
	{
		long x,y;   cin>>x>>y; a.push_back(x);  b.push_back(y);
	}
	for(int i=0;i<n;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);  swap(b[i],b[j]);
			}
			else if(a[i]==a[j] && b[i] > b[j])
			swap(a[i],a[j]),  swap(b[i],b[j]);
		}
	}
	bool flag = true;
	for(int i=1;i<n;++i)
	{
		if(b[i]<b[i-1])
		  flag = false;
	}
	if(!flag)
	{
		cout<<a[n-1]<<endl;
	}
	else
	cout<<b[n-1]<<endl;
}
