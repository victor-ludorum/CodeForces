#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b>a)
	return gcd(b,a);
	else if(b==0)
	return a;
	else return gcd(b,a%b);
}
int main()
{
	int a,b;   cin>>a>>b;
	if(gcd(a,b)>1)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
