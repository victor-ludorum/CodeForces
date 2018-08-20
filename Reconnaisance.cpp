#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,d;   cin>>n>>d;
	long long int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int s = 0;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(abs(a[i] - a[j])<=d)
			{
				s = s+1;
			}
		}
	}
	cout<<s-n<<endl;
}
