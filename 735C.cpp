#include <bits/stdc++.h>
using namespace std;
long long solve(long long n)
{
	if(n==2)
	return 1;
	else if(n==3)
	return 2;
	else if(n==4)
	return 2;
	else if(n==5)
	return 3;
	else if(n==6)
	return 3;
	else if(n==7)
	return 4;
	else if(n==8)
	return 3;
	else if(n==9)
	return 4;
	else
	{
	if(n&1)
	return 1 + solve((n+1)/2);
	else
	return 1 + solve(n/2);
    }
}
int main()
{
	long long n;   cin>>n;
	cout<<solve(n)<<endl;
}
