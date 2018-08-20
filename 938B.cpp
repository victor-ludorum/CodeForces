#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	map<long ,long> m;
	for(int i=0;i<n;++i)
	{
		int x;  cin>>x;
		m[x]++;
	}
	
	long l=1,r=1000000;
	int c=0;
	while(l<=r)
	{
		if(m[l]>0)
		c++;
		if(m[r]>0 && r!=l)
		c++;
		
		if(c==n)
		break;
		
		l++;r--;
				
	}
	cout<<l-1<<endl;
}
