#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;    cin>>n;
	int a[n+1];
	vector<int> b;
	map<int,int> ma;
	for(int i=0;i<n;++i)
	{
		cin>>a[i]; ma[a[i]]++;
		if(a[i]<0)
		b.push_back(a[i]);
	}
	      long long r=0;
		  long long h = ma[0];
		  r = r + (h*(h-1))/2;	
	for(int i=0;i<b.size();++i)
	{
		if(ma[-b[i]] > 0)
		{
		  r = r + ma[-b[i]];
		}
	}
	cout<<r<<endl;
}
