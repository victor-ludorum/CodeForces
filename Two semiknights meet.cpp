#include <bits/stdc++.h>
// This is a solution of problem "Little Xor" of Codeforces...
using namespace std;
int main()
{
	int n;    cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int res =0;
	for(int i=0;i<n;++i)
	{
	   int w = 0;
	   for(int j=i;j<n;++j)
	   {
	      w = w^a[j];
		  res = max(res,w);	
	   }		
			
	}
	cout<<res<<endl;
	
}

