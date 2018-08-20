#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	string s;   cin>>s;
	vector<int> v;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x;   v.push_back(x);
	}
	long p=1;
	bool flag = false, flag1 = false;  
	map<int,int> m;
	while(!flag&&!flag1)
	{
		if(s[p-1]=='>')
		{
			p = p + (v[p-1]); m[p-1]++;
		}
		else
		{
			p = p - (v[p-1]);  m[p-1]++;
		}
	//	cout<<p<<endl;
		if(p>(n)||p<1)
		flag = true;
		if(m[p-1]>1)
		flag1 = true;
	}
	if(flag)
	cout<<"FINITE"<<endl;
	else
	cout<<"INFINITE"<<endl;
}
