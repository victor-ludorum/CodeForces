#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;  cin>>s;
	int l = s.length();
	int a[l+1];
	for(int i=0;i<l+1;++i)
	a[i] = 0;
	
	for(int i=0;i<s.length();++i)
	{
		for(int j=i+1;j<s.length();++j)
		{
			if(s[i]==s[j])
			{
			
				int k = i;
				int o = j;
				int p = 0;
				while(s[k++]==s[o++])
				{
					p = p + 1;
				}
				if(p>a[i])
				a[i] = p;
			}
		}
	}
	cout<<*max_element(a,a+l+1)<<endl;
}
