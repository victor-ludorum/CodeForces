#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,n;
	cin>>a>>b>>n;
	if(a==0&&b!=0)
	{
		cout<<"No solution"<<endl;  return 0;
	}
	if(a==0&&b==0)
	{
		cout<<n/2<<endl;  return 0;
	}
	if(a!=0&&b==0)
	{
		cout<<"0"<<endl;  return 0;
	}
	int d = b/a;
	
	int r;
	bool flag = false;
	if(d>0)
	{
	
	for(int i=1;i<=d && flag == false;++i)
	{
		int y = pow(i,n);
		if(y==d)
		{
			flag = true;
			r = i;
		}
	}
    }
    else
    {
   	for(int i=d;i<0 && flag == false;++i)
	{
		int y = pow(i,n);
		if(y==d)
		{
			flag = true;
			r = i;
		}
	}
 	
	}
	
	if(flag)
	cout<<r<<endl;
	else
	cout<<"No solution"<<endl;
}
