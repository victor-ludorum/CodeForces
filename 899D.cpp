#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n;   cin>>n;
	if(n<5)
	cout<<"0"<<endl;
	else if(n==5)
	cout<<"1"<<endl;
	else
	{
		long long pr=5,cr=5,count;
		while(true)
		{
			if(n/cr==0)
			{
				count = (n-pr+1)-(n-pr+1)/9;
				break;
			}
			pr = cr;
			cr = cr*10;
		}
		cout<<count<<endl;
	}
}
