#include <bits/stdc++.h>
using namespace std;
int a[500005];
int main()
{
	int n;  cin>>n;
	long long s=0,t=0,r=0;
	for(int i=1;i<=n;++i)
	  {
	  	cin>>a[i];  s+=a[i];
	  }
	
	if(s%3!=0)
	{
		cout<<"0";  return 0;
	}
	else
	{
		int c=0;
		for(int i=1;i<=n-1;++i)
		{
			t+=a[i];
			if(t==(2*s/3))
			r+=c;
		    if(t==(s/3))
			  c++;
		//	  cout<<t<<endl;
		}
		cout<<r<<endl;
	}
}
