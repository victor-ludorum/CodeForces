#include <bits/stdc++.h>
using namespace std;
#define mn -1000000000000000000
int main()
{
	int n,m;  cin>>n>>m;
	long long a[n+1],b[m+1];
	for(int i=0;i<n;++i)
	cin>>a[i];
	
	for(int i=0;i<m;++i)
	cin>>b[i];
	
	long long r=mn;
	int in;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<m;++j)
		{
			if(r<(a[i]*b[j]))
			{
				r = a[i]*b[j];
				in = i;
			}
		}
	}
	
	vector<long long> re;
	for(int i=0;i<n;++i)
	{
		if(i!=in)
		{
			for(int j=0;j<m;++j)
			{
				re.push_back(a[i]*b[j]);
			}
		}
	}
	sort(re.begin(),re.end());
	reverse(re.begin(),re.end());	
	cout<<re[0]<<endl;
}
