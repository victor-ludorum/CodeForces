#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;   cin>>n>>k;
	int c; cin>>c;
	map<int,int> m;
	for(int i=0;i<c;++i)
	{
		int y;  cin>>y;
		m[y]++;
	}
	int f = 0;
	int s = 0;
	for(int i=1;i<=n;i++)
	{
		f++;
		if(m[i]==1||f==k)
		{
			f = 0;
			s++;
		}
	}
	cout<<s<<endl;
}
