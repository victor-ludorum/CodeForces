#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long x,y,r;   cin>>x>>y;
	if(x==0 && y==0)
	{
		cout<<"Yes"<<endl; return 0;
	}
	if(y==1 && x>=1)
	{
		cout<<"No"<<endl; return 0;
	}
	if(x<y-1)
	{
		cout<<"No"<<endl; return 0;
	}
	x =  x-y+1;
	if(x%2==0)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
