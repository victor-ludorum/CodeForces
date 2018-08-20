#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;   cin>>s;
	string a,b;   cin>>a>>b;
	bool flag = false,flag1 = false;
	int x = s.find(a);
	int x1 = s.find(b,x+a.length());
	
	if(x!=-1 && x1!=-1)
	flag = true;
	
	reverse(s.begin(),s.end());
	 x = s.find(a);
	 x1 = s.find(b,x+a.length());
	 
	if(x!=-1 && x1!=-1)
	flag1 = true;
		
	if(flag&&flag1)
	cout<<"both"<<endl;
	else if(flag&&!flag1) 
	cout<<"forward"<<endl;
	else if(!flag&&flag1)
	cout<<"backward"<<endl;
	else
	cout<<"fantasy"<<endl;
}
