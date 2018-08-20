#include <bits/stdc++.h>
using namespace std;
int main()
{
	 int n;   cin>>n;
	 int x[n+1],y[n+1];
	 for(int i=0;i<n;++i)
	  cin>>x[i]>>y[i];
	  int r=0;
	 for(int i=0;i<n;++i)
	 {
	 	for(int j=i+1;j<n;++j)
	 	{
	 	   for(int k=j+1;k<n;++k)
			{
			    if((y[i]-y[j])*(x[j]-x[k]) != (x[i] - x[j])*(y[j]-y[k]))  r++;
			}	
		}
	 }
	 cout<<r<<endl;
}
