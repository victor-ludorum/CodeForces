#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,s=0;   cin>>a>>b>>c;
	s = (a+b-1)*(b+c-1) - (b-1)*b;
	cout<<s<<endl;
}
