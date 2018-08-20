#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;  cin>>s;
	long long c =0;
	if(s.length()==2)
	{
		if(s[0]=='a' && s[1]=='b')
		c++;
		cout<<c<<endl;
		return 0;
	}
    for(int i=0;i<s.length()-1;++i)
    {
    	if(s[i]=='a' && s[i+1]=='b'&& s[i-1]=='a')
    	    c+=3;
        if(s[i]=='a' && s[i+1]=='b' && s[i-1]=='b')
           c++;
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='b')
          c+=2;
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='a')
		  c++;  
	}
	c = c % 1000000007;
	cout<<c<<endl;
}
