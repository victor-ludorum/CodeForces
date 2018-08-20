#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	int a[n+1];
	
	for(int i=0;i<n;++i)
	  cin>>a[i];
	
	int w,s,o;
	if(a[0]==1)
	{
		w = 1; s=2; o=3;
	}
	else if(a[0]==2)
    {
     	w = 2; s=1; o=3;
	}	
	else if(a[0]==3)
	{
		cout<<"NO"<<endl; return 0;
	}
	
	bool flag = true;
	for(int i=1;i<n;++i)
	{
	   	if(a[i]!=w && a[i]!=o)
	   	{
	   	  flag = false; break;	
		}
		if(a[i]==o)
		{
			int h = w;
			o = s;
			w = a[i];
			s = h;
		}
		else
		{
			swap(o,s);
		}		
	}
	if(!flag)
	cout<<"NO"<<endl;
	else
	cout<<"YES"<<endl;
}
