#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n;  cin>>n;
	vector<long> a;
	long d = n;
	for(int i=d+1;i>=1;--i)
	{
		if(n%i==0)
		a.push_back(i), n= i;
	}
	for(int i=0;i<a.size();++i)
	cout<<a[i]<<" ";
}
