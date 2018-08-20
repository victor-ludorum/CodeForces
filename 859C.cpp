#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	long long a[n+1];
	for(int i=0;i<n;++i)
	   cin>>a[i];
	sort(a,a+n);
	long long w=a[0],e=0;	
	for(int i=1;i<n;++i)
	{
		if(i%2==0)
		e+=a[i];
		else
		w+=a[i];
	}
	cout<<e<<" "<<w<<endl;
}
