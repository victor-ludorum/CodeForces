#include <bits/stdc++.h>
using namespace std;
int a[7];
int main()
{
	int m,n;  cin>>m>>n;
	 int c;
	for(int i=1;i<=m;++i)
	{
		for(int j=1;j<=n;++j)
		{
			  cin>>c;
			  cout<<a[j]<<" "<<a[j-1]<<endl;
			a[j] = max(a[j],a[j-1]) + c;
			   cout<<a[j]<<endl;
		}
	//	cout<<a[n]<<" ";
	}
}
