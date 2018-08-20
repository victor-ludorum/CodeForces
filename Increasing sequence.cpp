#include <bits/stdc++.h>
using namespace std;
int main()
{
	 int n,d;   cin>>n>>d;
	 long int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
    long s = 0;
	for(int i=1;i<n;++i)
	{
        if(a[i-1] > a[i])
        {
        //	cout<<a[i-1]<<" "<<a[i];
        	double w = a[i-1] - a[i];
        	  if((int)w % d!= 0)
        	  {
        	  w = w/d;
        	  w = ceil(w);
        //	  cout<<w<<endl;
              a[i] = a[i] + w*d;
              }
              else
              {
              	 w = w/d;
              	 w = w + 1;
              	a[i] = a[i] + w*d; 
			  }
        	  s = s+w;
		}
		else if(a[i-1] == a[i])
		{
			s = s+1;
			a[i] = a[i] + d;
		}
	}
	  cout<<s<<endl;
}
