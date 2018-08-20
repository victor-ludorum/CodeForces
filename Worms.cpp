#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	vector<long> v,s;
	map<long,long> ma;
	for(int i=0;i<n;++i)
	{
		long x;  cin>>x;   v.push_back(x);
		if(i==0)
	  {	s.push_back(x);  ma[x] = i+1;  }
		else
		{
		  s.push_back(s[i-1]+x);  ma[s[i-1] + x] = i+1;
		}
	}
	vector<long>::iterator low;
	long m;   cin>>m;
	for(int i=0;i<m;++i)
	{
		long x;  cin>>x;
		low = std::lower_bound(s.begin(),s.end(),x);
		cout<<(low-s.begin())+1<<endl;
	}
}
