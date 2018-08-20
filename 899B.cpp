#include <bits/stdc++.h>
using namespace std;
int main()
{
	int nl[] = {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};
	int nn[] = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	int ln[] = {31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};
	
	int n;   cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int r=0;
	for(int i=0;i<24;++i)
	{
		if(a[0]==nl[i])
		{
			int k=0;
			int q = i;
			int c=0,j=0;
			while(k<=24)
			{
		       if(j>=n)
		       {
		        r = max(r,c); c=0;break;	
		       }
				
				if(a[j]==nl[q])
				{
					j++; c++;
					r = max(r,c);
				}
				else
				j=0,c=0;
				
				q = (q+1)%24;
				k++;
			}
			
			if(r==n)
			{
		     cout<<"YES"<<endl;	return 0;		
			}
		}
	}

	for(int i=0;i<24;++i)
	{
		if(a[0]==ln[i])
		{
			int k=0;
			int q = i;
			int c=0,j=0;
			while(k<=24)
			{
		       if(j>=n)
		       {
		        r = max(r,c); c=0;break;	
		       }
				
				if(a[j]==ln[q])
				{
					j++; c++;
					r = max(r,c);
				}
				else
				j=0,c=0;
				
				q = (q+1)%24;
				k++;
			}
			
			if(r==n)
			{
		     cout<<"YES"<<endl;	return 0;		
			}
		}
	}

	for(int i=0;i<24;++i)
	{
		if(a[0]==nn[i])
		{
			int k=0;
			int q = i;
			int c=0,j=0;
			while(k<=24)
			{
		       if(j>=n)
		       {
		        r = max(r,c); c=0;break;	
		       }
				
				if(a[j]==nn[q])
				{
					j++; c++;
					r = max(r,c);
				}
				else
				j=0,c=0;
				
				q = (q+1)%24;
				k++;
			}
			
			if(r==n)
			{
		     cout<<"YES"<<endl;	return 0;		
			}
		}
	}
	
	cout<<"NO"<<endl;
}
