#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	long long x[n+1],y[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>x[i]>>y[i];
	}
	
	sort(x,x+n);
	if((x[0]>=0 && x[n-1]>=0)||(x[0]<0 && x[n-1]<0))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		if((x[0]<0 && x[1]>=0 && x[n-1]>=0)||(x[0]<0 && x[n-2]<=0 && x[n-1]>=0))
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
	
}
