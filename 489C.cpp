#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,s;  cin>>m>>s;
	string a,k;
	int n = s;
	if(m==1 && s==0)
	{
		cout<<"0 "<<"0"<<endl;  return 0;
	}
	if(s==0 && m>1)
	{
		cout<<"-1 -1"<<endl; return 0;
	}
	if(9*m < s)
    {
		cout<<"-1 -1"<<endl; return 0;    	
	}
	if(m==1 && s<10)
	{
		cout<<s<<" "<<s<<endl;  return 0;
	}
	for(int i=0;i<m;++i)
	{
		if(s>=9)
		{
			s = s-9;  a+='9';
		}
		else if(s>=8)
		{
			s = s-8; a+='8';
		}
		else if(s>=7)
		{
			s = s-7;  a+='7';
		}
		else if(s>=6)
		{
			s = s-6;  a+='6';
		}
		else if(s>=5)
		{
			s = s-5;  a+='5';
		}
		else if(s>=4)
		{
			s = s-4;  a+='4';
		}
		else if(s>=3)
		{
			s = s-3;  a+='3';
		}
		else if(s>=2)
		{
			s = s-2;  a+='2';
		}
		else if(s>=1)
		{
			s = s-1;  a+='1';
		}	
		else if(s==0)
		{
			a+='0';
		}
	}
	string r = a;
	if(9*(m-1)+1>=n)
	{
		
	 n--;  
     for(int i=0;i<m-1;++i)
     {
         	if(n>=9)
         	{
         		n=n-9;  k+='9';
			 }
		else if(n==8)
		{
			n = n-8; k+='8';
		}
		else if(n==7)
		{
			n = n-7;  k+='7';
		}
		else if(n==6)
		{
			n = n-6;  k+='6';
		}
		else if(n==5)
		{
			n = n-5;  k+='5';
		}
		else if(n==4)
		{
			n = n-4;  k+='4';
		}
		else if(n==3)
		{
			n = n-3;  k+='3';
		}
		else if(n==2)
		{
			n = n-2;  k+='2';
		}
		else if(n==1)
		{
			n = n-1;  k+='1';
		}	
		else if(s==0)
		{
			k+='0';
		}
	 }
	 k+='1';
    }
    else
    {
        
     for(int i=0;i<m;++i)
     {
         	if(n>=9)
         	{
         		n=n-9;  k+='9';
			 }
		else if(n==8)
		{
			n = n-8; k+='8';
		}
		else if(n==7)
		{
			n = n-7;  k+='7';
		}
		else if(n==6)
		{
			n = n-6;  k+='6';
		}
		else if(n==5)
		{
			n = n-5;  k+='5';
		}
		else if(n==4)
		{
			n = n-4;  k+='4';
		}
		else if(n==3)
		{
			n = n-3;  k+='3';
		}
		else if(n==2)
		{
			n = n-2;  k+='2';
		}
		else if(n==1)
		{
			n = n-1;  k+='1';
		}	
		else if(s==0)
		{
			k+='0';
		}
	 }    	
	}
//	 cout<<n<<" "<<s<<endl;
	 if(n>0 || s>0)
	 {
	 	cout<<"-1  -1"<<endl;  return 0;
	 }
	 reverse(k.begin(),k.end());
	cout<<k<<" "<<r<<endl;

}
