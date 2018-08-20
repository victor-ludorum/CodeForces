#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;   cin>>a>>b>>c;
	float d = b*b - 4*a*c;
	float z = (-b + sqrt(d))/(2*a);
	float x = (-b - sqrt(d))/(2*a);
	if(x>z)
	swap(x,z);
	printf("%.15f\n",z);
	printf("%.15f",x);
}
