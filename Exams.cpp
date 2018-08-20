#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;   cin>>n>>k;
	int r;
	int d = k;
	if(3*n<=k)
	{
	   cout<<"0"<<endl;
	   return 0;
	}
	else 
	{
		r = 3*n - k;
		cout<<r<<endl;
	}
}
