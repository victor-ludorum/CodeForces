#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;   cin>>n;
  int a[n+1];
  for(int i=1;i<=n;++i)
    cin>>a[i];
   int r = a[1],mx =0;
  for(int i=0;i<n;++i)
  {
 // 	cout<<r<<endl;
  	int c=0;
    for(int j=i+1;j<n;++j)
	{
	  if(a[j]<a[i])
	  c++;	
	}	
	
	if(mx<c)
	{
	mx = c;
	r = a[i];	
	}
  }   
  cout<<r<<endl;
}
