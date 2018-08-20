#include<bits/stdc++.h>
using namespace std;
int a[200009];
int main()
{
	string t,p;  cin>>t>>p;
	for(long i=0;i<t.length();++i)
	{
		long x;  cin>>x; a[x-1] = i;
	}
	int l=1, r=t.length();  int mid;
	while(l<=r)
	{	
	  mid = (l+r)>>1; int k=0;
	  for(int i=0;i<t.length();++i)
	  {
	  	if(t[i]==p[k] && a[i]>=mid)
	  	 k++;
	  }
	  if(k==p.length()) l = mid+1;
	  else
	  r = mid-1;
	}
	cout<<l-1<<endl;
}
