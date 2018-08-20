#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;    cin>>n>>k;
	int a[n],b[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;++i)
	{
		for(int j=i;j<n;++j)
		{
			if(a[i]<a[j])
			{
				int t; 
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				
				int t1 ;
				t1 = b[i];
				b[i] = b[j];
				b[j] = t1;
			}
			else if((a[i]==a[j]) && (b[i]>b[j]))
			{
				int t; 
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				
				int t1 ;
				t1 = b[i];
				b[i] = b[j];
				b[j] = t1;				
			}
		}
	}
	int c = 1,res;
	int d[n],l=0;
	 for(int i=1;i<n;++i)
	 {
	 	  if((a[i]==a[i-1])&&(b[i]==b[i-1]))
	 	     {
	 	      	c++;
			 }
			 else
			 {
			 	d[l++] = c;
			 	c = 1;
			 }
	 //	     cout<<a[i]<<" "<<b[i]<<endl;
	 }
	 d[l] = c;
	 for(int i=0;i<n;++i)
	 {
	 	  k = k-d[i];
	 	  if(k<=0)
	 	  {
	 	  	res = d[i];
	 	  	break;
		  }  
	 }
	    cout<<res<<endl;
}
