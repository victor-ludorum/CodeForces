#include<bits/stdc++.h>
using namespace std;
 int main()
{
	string s;   getline(cin,s);
	int l = s.length() - 2;
	for(int i=s.length()-2;i>=0;--i)
	{
	 	if((int)s[i]!=32)
	 	{
	 		l = i;
     if(s[l]=='A'||s[l]=='E'||s[l]=='I'||s[l]=='O'||s[l]=='U'||s[l]=='Y'||s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'||s[l]=='y')
       cout<<"YES"<<endl;
     else
       cout<<"NO"<<endl;
       break;
       }
    }
}
