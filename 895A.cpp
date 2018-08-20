#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n+1],s=0;
	for(int i=0;i<n;++i)
	cin>>a[i];
	
	int mn = INT_MAX;
	int k=0;
	int i=0;
	bool flag = true;
	while(1)
	{
       s = s + a[i];
       while(s>=180)
       {
       	int g = abs((360-s)-(s));
       	mn = min(mn,g);
       	s = s-a[k];
       	k++;
	   }
	    int d = abs((360-s)-(s));
	    mn = min(mn,d);
	    i++;
	    if(k==n)
	   {
	   	 k=0;
	   }
	   if(i==n && flag)
	   {
	     i=0;	flag = false;
	   }
	   else if(i==n && !flag)
	   {
	   	  break;
	   }		
	}
	
	cout<<mn<<endl;
}
