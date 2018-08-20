#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;   cin>>s;
	string a = s;
	reverse(a.begin(),a.end());
	if(a==s || s.length()%2!=0 || s.length()==0)
	cout<<"First"<<endl;
	else
	cout<<"Second"<<endl;
}
