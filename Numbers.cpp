#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else if (b>a)
	return gcd(b,a);
	else
	return gcd(b,a%b);
}
int main()
{
	int n;  cin>>n;
	int n1 = n;
	int r = 0;
	for(int i=2;i<n;++i)
	{
		int k = 0, s= 0;
		int a[20];
		memset(a,0,sizeof(int));
		while(n!=0)
	  {
			a[k] = a[k]+(n%i);
		    k++;
		    n=n/i;
	  }
	    for(int j=0;j<k;++j)
	    {
	    	s = s + a[j];
		}
		 r = r + s;
		 n = n1;
	}
	int g = gcd(r,n-2);
	r = r/g;
	int f = (n-2)/g;
	cout<<r<<"/"<<f<<endl;
}
