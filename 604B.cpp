#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;    cin>>n>>k;
	vector<int> a,b;
	int res=0;
	for(int i=0;i<n;++i)
	{
		int x;   cin>>x;  a.push_back(x);
		res = max(res,x);
	}
	for(int i=0;i<n-k;++i)
	{
		res = max( res , a[i]+ a[2*(n-k)-i-1]);
	}
	cout<<res<<endl;
}
