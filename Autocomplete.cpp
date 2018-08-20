#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a;   cin>>a;
	int n;   cin>>n;
	string s[n];
	for(int i=0;i<n;++i)
	{
		cin>>s[i];
	}
	sort(s,s+n);
	int l = a.length();
	string r;
	bool flag = false;
	for(int i=0;i<n&&flag == false;++i)
	{
		char p = s[i][0];
		if(p==a[0])
		{
			int h = 1;
			for(int j=1;j<l;++j)
			{
				if(s[i][j]!=a[j])
				break;
				else
				h++;
			}
			if(h==l)
			{
			flag = true;
			r.assign(s[i]);
		    }
		}
	}
	if(flag)
	cout<<r<<endl;
	else
	cout<<a<<endl;
}
