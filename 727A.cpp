#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;  cin>>a>>b;
	int c[100000]; int k=0;
	while(b>a)
	{
		c[k++] = b;
		if(b%10==1)
		 b = (b-1)/10;
		else if(b%2==0)
		b=b/2;
		else
		break;
	}
	if(b==a)
	{
		cout<<"YES"<<endl;
		cout<<k+1<<endl<<a<<" ";
		for(int i=k-1;i>=0;--i)
		cout<<c[i]<<" ";
	}
	else
	cout<<"NO"<<endl;
}
