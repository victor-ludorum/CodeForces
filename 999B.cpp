#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	int n;   cin>>n;
	string s;   cin>>s;
	vector<int> v;
	for(int i=1;i<=n;++i)
	{
		if(n%i==0)
		v.push_back(i);
	}
	
	for(int i=0;i<v.size();++i)
	{
		int u = v[i];
	   string h=""; 
	   for(int j=0;j<u;++j)
	   {
	   	h+=s[j];
	   }
	   reverse(h.begin(),h.end());
	   for(int j=u;j<n;++j)
	   {
	   	 h+=s[j];
	   }
	   s = h;
	}
	cout<<s<<endl;
}
