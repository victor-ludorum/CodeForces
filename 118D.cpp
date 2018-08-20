#include <bits/stdc++.h>
using namespace std;
const int M =100000000;
int main()
{
	int n1,n2,k1,k2;
	cin>>n1>>n2>>k1>>k2;
	int n[120][120], m[120][120];
	n[0][0] = 1; m[0][0] =1;
	for(int i=0;i<=n1;++i)
	{
		for(int j=0;j<=n2;++j)
		{
			for(int k=1;i>=k&&k<=k1;++k)
			  m[i][j]+=n[i-k][j], m[i][j]%=M;
			for(int k=1;j>=k&&k<=k2;++k)
			  n[i][j]+=m[i][j-k], n[i][j]%=M;
		}
	}
	cout<<(n[n1][n2] + m[n1][n2])%M<<endl;
}
