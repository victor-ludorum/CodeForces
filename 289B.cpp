#include <bits/stdc++.h>
using namespace std;
int a[102][102];
int main()
{
	int n,m,d;  cin>>n>>m>>d;
	vector<int> v;	
	bool flag = false;
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=m;++j)
		{
			cin>>a[i][j];  v.push_back(a[i][j]);
		}
	}
	sort(v.begin(),v.end());
	int g =a[1][1]%d;
    for(int i=1;i<=n;++i)
    {
    	for(int j=1;j<=m;++j)
    	{
    		if(a[i][j]%d!=g)
	        {
		        cout<<"-1"<<endl;  return 0;
	        }    		
		}
	}
	
	int j = (v.size()/2); // median element ... 
	long long s=0;
	for(int i=0;i<v.size();++i)
	{
			s = s + abs(v[i]-v[j])/d;
	}
	cout<<s<<endl;
}
