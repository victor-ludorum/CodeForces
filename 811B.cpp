#include<bits/stdc++.h>
using namespace std;
int a[10005],b[10005];
int main()
{
	int n,m;   cin>>n>>m;
	map<int,int> p;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];p[a[i]] = i;
	}
	for(int i=0;i<m;++i)
	{
		int x,y,z;  cin>>x>>y>>z;
		for(int i=0;i<n;++i)
		  b[i] = a[i];
		sort(b+x-1,b+y);
	/*	for(int i=0;i<n;++i)
		cout<<b[i]<<" ";
		cout<<endl;   */
		for(int i=0;i<n;++i)
		    if(b[i]==a[z-1])
		    {
		    	if(i==p[a[z-1]])
		    {
					cout<<"Yes"<<endl;  break; }
		    	else
		    {
				cout<<"No"<<endl; break; }
			}
	}
}
