#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,a;   cin>>n>>m;
	if(n==m&&m==1)
	a = 1;
	else if(n-m>(m-1))
	a = m+1;
	else
	a = m-1;
	cout<<a<<endl;
}
