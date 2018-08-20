#include <bits/stdc++.h>
using namespace std;
int a[100005],b[100005];
int main()
{
	int n,k,j=0;  cin>>n>>k;
	string s;  cin>>s;
	int r=0;
	map<char,int> m;
	for(int i=0;i<n;++i)
	{
		m[s[i]]++;
		if(min(m['a'],m['b'])>k)
		{
			m[s[j]]--;  j++;
		}
		else
		r = max(r,i-j);
	}
	  cout<<r+1<<endl;
}
