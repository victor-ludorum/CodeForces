#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long r,g,b;   cin>>r>>g>>b;
	long long s=min((r+g+b)/3,min(min(r+g,g+b),r+b));
	cout<<s<<endl;
}
