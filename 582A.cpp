#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;  cin>>n;
	vector<long> a;
	map<long,int> m;
	for(int i=0;i<n*n;++i)
	{
		long x;   cin>>x;  a.push_back(x);
	}
	sort(a.begin(),a.end());
	reverse(a.begin(),a.end());
	int i=0,c=0;
	while(c!=n && i!=n*n)
	{
		m[a[i]]++;
		if(m[a[i]]==1)
		cout<<a[i]<<" ",c++;
		i++;
	}
	if(c<n)
	{
		for(int i=n-1 ; i>=0 && c!=n ; --i)
		  cout<<a[i]<<endl, c++;
	}
	
}
