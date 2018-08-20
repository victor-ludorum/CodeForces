#include <bits/stdc++.h>
using namespace std;
int main()
{
	double n,a;  cin>>n>>a;
	double x,y,z;
	if(n==3)
	{
		cout<<"1 2 3"<<endl;  return 0;
	}
	else
	{
		double b = ((n-2)*180)/n;
	//	cout<<b<<endl;
		double m = INT_MAX;
		b = b/(n-2);
		m = min(m,abs((b*(n-2))-a));
		x =1; y = 2; z=3; double h=z;
		for(double i=1;i<=n-3;++i)
		{
			h++;
			 double j = (b*(n-2-i));
		//	 cout<<j<<endl;
		//	 cout<<abs(j-a)<<endl;
			 if(m> abs(j - a))
			 {
			 	m = abs(j - a);
			 	 z=h;
			 }
		}
		cout<<x<<" "<<y<<" "<<z<<endl;
	}
	
}
