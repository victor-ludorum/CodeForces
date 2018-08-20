#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	freopen("input.txt", "rt", stdin);
 	freopen("output.txt", "wt", stdout);

	int n; cin>>n;
	map<int ,int> m;  vector<int> v;
	for(int i=1;i<=n;++i)
	   {
	   	int x;  cin>>x;  v.push_back(x);
	   }
	sort(v.begin(),v.end());
//	for(int i=0;i<n;++i)
//	cout<<v[i]<<" ";  cout<<endl;
	int mx = INT_MIN;
	vector<int>::iterator low;
	for(int i=0;i<n;++i)
	{
		low = std::upper_bound(v.begin(),v.end(),v[i]*2); 
		int h = low - v.begin() - i;
	//	cout<<h<<endl;
		mx = max(mx,h);
	}
	cout<<n-mx<<endl;
}
