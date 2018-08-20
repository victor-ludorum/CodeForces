#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
     gets(s);
	int l=0;
	for(int i=0;i<strlen(s);++i)
	{
		if(s[i]==':')
		{
			cout<<"Hello"<<endl;
			for(int j=i+1;j<strlen(s);++j)
			{
				if(s[j]=='+'||s[j]=='-')
				break;
				else
				l++;
				
				cout<<"Hello 1"<<endl;
			}
		}
	}
	if(l>0)
	cout<<l+2<<endl;
	else
	cout<<"0"<<endl;
}
