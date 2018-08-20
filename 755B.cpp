#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;   cin>>n>>m;
	map<string,int> p;
	int c =0;
	for(int i=0;i<n;++i)
	{
		string s;   cin>>s; p[s]++;
	}
	for(int i=0;i<m;++i)
	{
		string s;  cin>>s; p[s]++;
		if(p[s]==2)
		c++;
	}
	if(n>m || (c&1 && n>=m))
	cout<<"YES"<<endl;
	else 
	cout<<"NO"<<endl;
}
