#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;  cin>>n>>k;
	int a[n],b[k];
	for(int i=0;i<n;++i)
	cin>>a[i];
	for(int i=0;i<k;++i)
	cin>>b[i];
	sort(b,b+k); reverse(b,b+k);
	int p=0;
	for(int i=0;i<n;++i)
	if(a[i]==0)
	a[i] = b[p++];
	bool flag = false;
	for(int i=1;i<n;++i)
	if(a[i-1]>a[i])
	{
	flag = true;break;}
	if(flag)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
