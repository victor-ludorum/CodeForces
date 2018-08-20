#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	int r=0;
	for(int i=1;i<=n;++i)
	{
		for(int j=i+1;j<=n;++j)
		{
			int x = i^j;
			if(x>j && x<=n && (i+j)>x)
			r++;
		}
	}
//	 r = r/3;
	cout<<r<<endl;
}
