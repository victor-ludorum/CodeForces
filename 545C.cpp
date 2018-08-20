#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	vector<int> a,b,c;
	for(int i=0;i<n;++i)
	{
		int x,y;  cin>>x>>y;  a.push_back(x);  b.push_back(y);
	}
	if(n==1)
	{
		cout<<"1"<<endl;  return 0;
	}
	for(int i=1;i<n;++i)
	{
		c.push_back(abs(a[i] - a[i-1]));
	}
	int c1=0;
	for(int i=0;i<c.size();++i)
	{
		if(b[i+1]<c[i] && (i+1)!=(n-1))
		  c[i]-=b[i+1], c1++;
		else if(b[i+1]<c[i+1] && (i+1)!=(n-1))
		  c[i+1]-=b[i+1],  c1++; 
	}
	cout<<c1+2<<endl;
}
