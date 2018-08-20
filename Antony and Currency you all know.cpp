#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;  cin>>s;
	bool flag = true;
	int p,i;
	for( i=0;i<s.length();++i)
	{
		if(s[i]=='2'||s[i]=='4'||s[i]=='0'||s[i]=='6'||s[i]=='8')
		{
			flag = false;
			if(s[i]<s[s.length()-1])
			{
			swap(s[i],s[s.length()-1]); break;
		    }
		    else
		    p = i;
		}
	}
	if(i==s.length())
	swap(s[p],s[s.length()-1]);
	if(flag)
	cout<<"-1"<<endl;
	else
	cout<<s<<endl;
}
