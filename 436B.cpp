#include <bits/stdc++.h>
using namespace std;
long long b[2005][2005];
char a[2005][2005];
int main()
{
	long long n,m,k;   cin>>n>>m>>k;
     
     for(int i=0;i<n;++i)
     {
     	for(int j=0;j<m;++j)
     	cin>>a[i][j];
	 }
	 
	 for(int i=1;i<n;++i)
	 {
	 	for(int j=0;j<m;++j)
	 	{
	 	   if(j-i>=0)
			{
		      if(a[i][j-i]=='R')
		      b[i][j] = b[i][j]+1;
		    } 	
		   if(j+i<m)
		   {
		      if(a[i][j+i]=='L')
			  b[i][j] = b[i][j] + 1;	
		   } 
		   if(a[i+i][j]=='U')
		     b[i][j] = b[i][j] + 1;
		   
		   if(a[i-i][j]=='D')
		     b[i][j] = b[i][j] + 1;
		   
		   b[i][j] = b[i-1][j] + b[i][j]; 
		}
	 }
	 
	 for(int i=0;i<m;++i)
	 {
	 	cout<<b[n-1][i]<<" ";
	 }
	 cout<<endl;
}
