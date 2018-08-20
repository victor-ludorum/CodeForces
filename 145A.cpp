#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,a;  cin>>s>>a;
	int c=0,p=0;
	for(int i=0;i<s.length();++i)
	{
		if(a[i]!=s[i])
		{
			if(a[i]=='7' && s[i]=='4')
			   c++;
		    else
		       p++;
		}
	}
    cout<<max(c,p)<<endl;
}
