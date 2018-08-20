#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;    cin>>n;
	vector<long> v;
	for(int i=0;i<n;++i)
	{
		long x;   cin>>x;  v.push_back(x);
	}
	if(n==1)
	{
		cout<<"1"<<endl;  return 0;
	}
	int c =2;
	int m=2;
	for(int i=2;i<n;++i)
	{
		if(v[i]==v[i-1] + v[i-2])
		 {
		 	if(c==1)
		 	c = 3;
		 	else
		    c++;
		 m=max(c,m);
	     }
	     else
	     c = 1;
	}
	cout<<m<<endl;
}
