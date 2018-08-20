#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v;   cin>>v;  int a[10]; int m=INT_MAX; int x,r=0;
    for(int i=1;i<=9;++i)
     {
     	cin>>a[i];
     	if(m>a[i])
     	 m=a[i],x = i;
     }
     int l = v/m;
     if(l==0)
     {
     	cout<<"-1"<<endl; return 0;
	 }
     for(int i=1;i<=l;++i)
     {
     	for(int j=9;j>=1;--j)
     	{
     		if(r+a[j]+m*(l-i)<=v)
     		{
     			cout<<j; r+=a[j];
			 }
		 }
	 }
}
