#include<bits/stdc++.h>
using namespace std;
char a[112][112];
int main()
{
	int n;  cin>>n;
	for(int i=1;i<=n;++i)
	for(int j=1;j<=n;++j)
	cin>>a[i][j];
	
	for(int i=1;i<=n;++i)
	{
		for(int j=1;j<=n;++j)
		{
			if(a[i][j]=='#')
			{
				if(a[i+1][j]!='#'|| a[i+1][j-1]!='#' || a[i+1][j+1]!='#' || a[i+2][j]!='#')
				{
					cout<<"NO"<<endl;  return 0;
				}
				a[i][j] = a[i+1][j] = a[i+1][j-1] = a[i+1][j+1] = a[i+2][j] ='.';
			}
		}
	}
	cout<<"YES"<<endl;
}
