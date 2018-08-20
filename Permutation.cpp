#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	vector<int> v;
	map<int,int> m;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x; v.push_back(x);  m[x]++;
	}
	sort(v.begin(),v.end());  int c=0;
	for(int i=1;i<=n;++i)
	{
		if(m[i]<1)
		c++;
	}
	cout<<c<<endl;
}
