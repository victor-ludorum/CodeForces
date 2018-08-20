#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;   cin>>n>>m;
	int mn,mx;
	if(n==0&&m>0)
	cout<<"Impossible"<<endl;
	else if(m>0&&m>=n)
	{
		mn = n + abs(n-m);
		mx = n + m-1;
		cout<<mn<<" "<<mx<<endl;
	}
	else if(m==0)
	{
		cout<<n<<" "<<n<<endl;
	}
	else if(n>m)
	{
		mn = n;
		mx = n + m-1;
		cout<<mn<<" "<<mx<<endl;
	}
	
}
