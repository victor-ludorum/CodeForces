#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[6]; int s=0;
	for(int i=0;i<6;++i)
	{
		cin>>a[i];
		s+=a[i];
	}
	bool flag = false;
	for(int i=0;i<6;++i)
	{
		for(int j=i+1;j<6;++j)
		{
				
		int h = a[i]+a[j];
		for(int k=j+1;k<6;++k)
		{
			if(h+a[k]==(s-h-a[k]))
			{
				flag = true; break;
			}
		}
		
	    }
	}
	
	if(flag)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
