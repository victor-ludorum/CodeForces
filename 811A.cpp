#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,s=0;  cin>>a>>b; bool flag = true;
	long long i=1;
	while(flag)
	{
        if(i&1)
		{
		  a = a-i;
		  if(a<0)
		  cout<<"Vladik"<<endl, flag = false;	
		}	
		else
		{
			b = b - i; 
			if(b<0)
			cout<<"Valera"<<endl, flag = false;
		}
		i++;
	}
}
