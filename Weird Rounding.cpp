#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m; int k;  cin>>n>>k;
	int s=0;
	m=n;
	int y=0;
	while(m!=0)
	{
		if(m%10!=0)
		 y++;
		m=m/10;
		s++;
	}
	if(n==0)
	cout<<"0"<<endl;
	else if(s-y<k)
	cout<<s-1<<endl;
	else
	{
		long long int p = n;
		int c=0,r=0;
		while(c!=k)
		{
			if(p%10==0)
			c++;
			else
			r++;
			p=p/10;
		}
		cout<<r<<endl;
	}
}
