#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c;   cin>>a>>b>>c;
	double r = ceil((c*(a-b))/b);
	cout<<(int)r<<endl;
}
