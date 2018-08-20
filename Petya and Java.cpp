#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;  cin>>n;
	if(n>=-128 && n<=127)
	cout<<"byte"<<endl;
	else if(n>=-32768 && n<=32767)
	cout<<"short"<<endl;
	else if(n>=-2147483648 && n<=2147483647)
	cout<<"int"<<endl;
	else if(n>=-9223372036854775808 && n<=9223372036854775807)
	cout<<"long"<<endl;
	else
	cout<<"BigInteger"<<endl;
}
