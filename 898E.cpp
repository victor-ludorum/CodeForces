#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
	int n,m,k;   cin>>n>>m>>k;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	
	sort(a,a+n);
	queue<int> q;
	int r=0;
	for(int i=0;i<n;++i)
	{
		while(!q.empty() && a[i]-q.front()>=m)
		{
			q.pop();
		}
		if(q.size()>=k-1)
		{
			r++;
		}
		else
		q.push(a[i]);
	}
	cout<<r<<endl;
}
