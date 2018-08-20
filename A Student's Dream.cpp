#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[2][2];
	for(int i=0;i<2;++i)
	{
		for(int j=0;j<2;++j)
		{
			cin>>a[i][j];
		}
	}
	
	if(a[1][1]>=a[0][0]-1&&a[1][1]<=(a[0][0]+1)*2)
	cout<<"YES"<<endl;
	else if(a[1][0]>=a[0][1]-1&&a[1][0]<=(a[0][1]+1)*2)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
