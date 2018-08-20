#include<bits/stdc++.h>
using namespace std;
int m[100005]={0};
int main()
{
	int n;  cin>>n;
	int r;
	for(int i=0;i<n;++i)
	{
		int x;   cin>>x; 
		m[x]++;
	}
	int mx = 1;
	for(long i=2;i<100000;++i)
	{
		int s =0;
		for(int j=i;j<=100000;j+=i)
		   s = s + m[j];
		 
		mx=max(s,mx);   
	}
	cout<<mx<<endl;
}
