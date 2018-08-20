#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,d,a[n+1],s=0,c=0;   cin>>n>>d;	
    for(int i=0;i<n;++i)
	{
        cin>>a[i];
		if(a[i]==0)
		{
			if(s<0)
			c++;
		}
		s+=a[i];
		if(s>d)
		break;
	}
	if(s>d)
	{
		cout<<"-1"<<endl;
	}
	else
	cout<<c<<endl;
}
