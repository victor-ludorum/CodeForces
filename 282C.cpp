#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;    cin>>a>>b;
	if(a.length()!=b.length())
	cout<<"NO"<<endl;
	else
	{
		bool flag1 = false,flag2 = false;
		for(int i=a.length()-1;i>=0;--i)
		{
			if(a[i]=='1')
			flag1 = true;
			if(b[i]=='1')
			flag2 = true;
		}
		if(a.size()==1)
		flag1 = false;		
		if(a==b)
		{
			flag1 = flag2 = true;
		}
		
		if(flag1 and flag2)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
}
