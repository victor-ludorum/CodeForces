#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;   cin>>n;
	if(n<=4)
	{
		cout<<"0"<<endl;
		return 0;
	}
	long long int a = n/2;
	long long int j = a/2;
	if(a%2 != 0)
	cout<<(a-1)/2<<endl;
	else
	cout<<j-1<<endl;
}
