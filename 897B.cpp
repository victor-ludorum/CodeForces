#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long k,p,s=0;  cin>>k>>p;
  for(int i=1;i<=k;++i)
  {
    ostringstream str1;
    str1 << i;
    string h = str1.str();
	string y = h;
  	reverse(h.begin(),h.end());
  	y+=h;
  	int l= y.length();
  	long long n=0;
  	for(int j=l-1;j>=0;--j)
  	{
  		n = (n + (y[j]-'0')*pow(10,j));
  		n = n%p;
	}
	s = (s+n)%p;
  }
  cout<<s<<endl;
}
