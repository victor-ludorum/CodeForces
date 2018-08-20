#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,c,z=0,k=1;   cin>>a>>c;
    while(a||c)
    {
    	int d = ((c%3)-(a%3)+3)%3;
    	z =  z + k*d;
    	c=c/3; a = a/3;
    	k=k*3;
	}
	cout<<z<<endl;
}
