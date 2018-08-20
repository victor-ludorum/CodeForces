#include <bits/stdc++.h>
using namespace std;
// int l[5001],r[5001],q[5001];
int main()
{
	string s;   cin>>s;
	int n = s.length();
	int re=0;
	for(int i=0;i<n;++i)
	{
		int l=0,r=0,q=0;
		for(int j=i;j<n;++j)
		{
			if(s[j]=='(')
			l++;
			else if(s[j]==')')
			r++;
			else
			q++;
			
			if((l-q==r)||(r-q==l))
			re++;
			
			cout<<i<<" "<<j<<" "<<l<<" "<<r<<" "<<q<<" "<<re<<endl;
		}
	//	cout<<re<<endl;
	}
	cout<<re<<endl;
}
