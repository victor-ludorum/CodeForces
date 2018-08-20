#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;  cin>>n;
	vector<int> a;
	while(n>0)
	{
		int m = n;
		int s =0;
		int c = 1;
		while(m>0)
		{
			if(m % 10)
			{
				s = s + c;
			}
			c = c*10;
			m = m /10;
		}
//		cout<<s<<endl;
		a.push_back(s);
		n=n-s;
	}
	cout<<a.size()<<endl;
	for(int i=0;i<a.size();++i)
	cout<<a[i]<<" ";
}
