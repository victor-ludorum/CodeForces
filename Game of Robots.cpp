#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;long long int k;   cin>>n>>k;
	vector<long long int> v;
    long int i= 0;
	while(i!=n)
	{
		long long int x;  cin>>x; i++;
		v.push_back(x);
	}
    long long p=1;
    while(k>p)
    {
    	k=k-p;
    	p++;
	}
	cout<<v[k-1]<<endl;
}
