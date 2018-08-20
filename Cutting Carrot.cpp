#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n,h;   cin>>n>>h;
	double f,s; f = (double)(h/(sqrt(n)));
	for(int i=1;i<=n-1;++i)
	{
		s = (double)(f*(double)(sqrt(i)));
		printf("%.12f ",s);
	}
}
