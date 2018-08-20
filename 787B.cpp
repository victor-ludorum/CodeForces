#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,z,p;    cin>>n>>p;
	vector<int> a[p];
	for(int i=0;i<p;++i)
	{
	map<int,int> m;		
        z =0;
		int k;  cin>>k;
		for(int j=0;j<k;++j)
		{
			int x;  cin>>x; a[i].push_back(x); 
			m[x]++;
			if(m[-x]>0) z = 1;
		}
		if(z==0)
		{ cout<<"YES"<<endl ; return 0;  }
	}
	if(z==1)
	cout<<"NO"<<endl;
}
