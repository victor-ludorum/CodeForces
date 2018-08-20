#include<bits/stdc++.h>
using namespace std;
int a[3001];
int main()
{
	int n,v;  cin>>n>>v;
	long int s=0;
	for(int i=0;i<n;++i)
	{
		int f,b;
		cin>>f>>b;
		a[f] = a[f] + b;
	}
	 for(int i=1;i<3005;++i)
	 {
	 	if(a[i]>=v)
	 	{
	 	   a[i]-=v;
			s+=v;
			if(a[i]>=v)
			  a[i+1]+=v;
			else
			  a[i+1]+=a[i];	
		}
		else
		  s = s+a[i];
	 }   
    	cout<<s<<endl;
}
