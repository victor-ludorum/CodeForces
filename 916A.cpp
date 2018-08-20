#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,h,m;   cin>>x>>h>>m;
	
	if(h%10==7 || h/10==7 || m%10==7 || m/10==7)
	  {
	  	cout<<"0"<<endl;  return 0;
	  }
	    int r=0;
		if(x>m)
		{
			m = 60-(x-m);
			if(h==0)
			h = 23;
			else
			h--;
			
			r++;
		}	  
//	      cout<<"value of m "<<m<<" h is "<<h<<endl;
    	while(m%10!=7 && m/10!=7 && h%10!=7 && h/10!=7)
    	{
    		m = m-x;
	        r++;  
	        
			if(m%10==7 || m/10==7)
			break;
			  		
		    if(x>m)
	      {
//	      	cout<<"value of h is "<<h<<endl;
			m = 60-(x-m);
			if(h==0)
			h = 23;
			else
			h--;
			
			r++;
	      }
//	      cout<<"value of m "<<m<<" h is "<<h<<endl;
//        cout<<"value of r is "<<r<<endl;	      
	    }
	    cout<<r<<endl;
}
