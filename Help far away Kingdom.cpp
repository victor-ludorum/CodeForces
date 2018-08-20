#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;  cin>>s;
	char z[1000];  int k=0;
	char a,b;
	for(int i=0;i<s.length();++i)
	{
		z[k++] = s[i];
		if(s[i]=='.')
		{
			a = s[i-1];
			b = s[i+1];
			break;
		}
	}
	z[k-2] = '\0';
	int x,y;
	x = a-'0';
	y = b - '0';
	
	if(x==9)
	cout<<"GOTO Vasilisa"<<endl;
	else
	{
		if(y>=5)
		cout<<z<<(x+1)<<endl;
		else
		cout<<z<<x<<endl;
	}
}
