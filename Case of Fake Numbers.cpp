#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n;
	int a[n+1];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	bool flag = true;
	int c=0;
	while(flag&&c!=n)
	{
	
	for(int i=0;i<n;++i)
	{
		if(i%2==0)
		{
			if(a[i]!=n-1)
			a[i] = a[i]+1;
			else
			a[i] = 0;
		}
		else
		{
			if(a[i]!=0)
			a[i] = a[i]-1;
			else
			a[i] = n-1;
			
		}
	}
	    int h=0;
	    for(int i=0;i<n;++i)
	    {
	    	if(a[i]==i)
	    	 h++;
		}
		if(h==n)
		flag = false;
		 c++; 	  
    }
    if(flag)
    cout<<"No"<<endl;
    else
    cout<<"Yes"<<endl;
}
