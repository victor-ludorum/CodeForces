#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;   cin>>a>>b>>c;
	int d = a%b;
	int i=1;
	if(c==0 && d*10<b)
	{
		cout<<"1"<<endl; return 0;
	}
	bool flag = false;
	while(i<1000000)
	{
	     if(d<b && d!=0)
	     {
			d =d*10;
	     }		
		while(d<b && d!=0)
		{
			d =d*10;
			int e = 0; 
		    if(e==c)
		    {
			flag = true; break;
		    }
			i++;		
		}
		if(flag)
		break;
		
		int e = d/b;
		d = d%b;
		if(e==c)
		{
			flag = true; break;
		}
		i++;
	}
	if(flag)
	cout<<i<<endl;
	else
	cout<<"-1"<<endl;
}
