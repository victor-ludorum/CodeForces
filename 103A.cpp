#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	long long a[n] ,s=0;
	for(int i=0;i<n;++i)
	cin>>a[i];
	int k =0;
	for(int i=0;i<n;++i)
	{
		s = s + a[i] + i*(a[i] - 1);
	}
	
	cout<<s<<endl;
}
