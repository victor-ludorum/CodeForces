#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;   cin>>n;
	vector<int> a,b;
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		int x,y;   cin>>x>>y;  a.push_back(x);  b.push_back(y);  m[y]++;
	}
	if(m[1]==n || m[2]==n)
	{
		cout<<"Infinity"<<endl;   return 0;
	}
	bool flag = false;
	for(int i=1;i<n;++i)
	{
		if(b[i]>b[i-1] && a[i-1]>0)  flag = true;
		if(b[i]<b[i-1] && a[i-1]<0)  flag = true;
	}
	if(flag)
	{
		cout<<"Impossible"<<endl;  return 0;
	}
	if(b[0]==1)
	{
		int s = 1901;
		for(int i=0;i<n;++i)
		{
			s = s + a[i];
		}
		cout<<s<<endl;
	}
	else
	{
		int s = 1899;
		for(int i=0;i<n;++i)
		{
			s = s + a[i];
		}
		cout<<s<<endl;		
	}
}
