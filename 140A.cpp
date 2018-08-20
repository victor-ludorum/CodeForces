#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double R,r,mx;
	cin>>n>>R>>r;
	
	if(r>R)
	cout<<"NO"<<endl;
	else if(n<=1.0)
	{
		if(r<=R)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	else if(n<=2.0)
	{
		if(2*r<=R)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;	
	}
	else
	{
	
         mx = int(acos(-1.0)/asin(double(r)/double(R-r))+1e-6);
       //  cout<<mx<<endl;
	     if(n<=mx)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
