#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c;   cin>>n>>c;
	vector<int> a,b;
	for(int i=0;i<n;++i)
	{
	  int x;  cin>>x;	a.push_back(x);
	}
	for(int i=0;i<n-1;++i)
	{
		b.push_back(a[i]-a[i+1]);
	}
	int d = *max_element(b.begin(),b.end()) - c;
	if(d<=0)
	cout<<"0"<<endl;
	else
	cout<<d<<endl;
}
