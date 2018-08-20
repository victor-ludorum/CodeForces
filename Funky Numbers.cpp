#include<bits/stdc++.h>
using namespace std;
#define m 1000000000
long mx = 1000000;
int main()
{
	vector<long long int> a;
	map<long long int,int> ma;
	for(long i=1;i<=1000000;++i)
	{
		long long int v;
		v = (i*(i+1))/2;
		a.push_back(v);
		ma[a[i-1]]++;
	}
	cout<<a[150000]<<endl;
	long long int s ;  cin>>s;
	bool flag = false;
	for(int i=1;i<=sqrt(s);++i)
	{
		long long int w = a[i-1];
		long long int x = s-w;
			if(ma[x]>0)
			{
	//		cout<<x<<endl;
			flag = true;
		    }
	}
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
