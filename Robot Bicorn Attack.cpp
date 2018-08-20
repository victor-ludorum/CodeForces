#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;    cin>>s;
	if(s[0]=='0'||s.length()>18)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	int l = s.length();
	int ls = l-2;
	if(ls>6)
	ls = 6;
	char a[ls];
	for(int i=0;i<ls;++i)
	{
		a[i] = s[i];
	}
	a[l-2] = '\0';
//	cout<<"The value of a is "<<a<<endl;
	for(int i=1;i<l-ls+1;++i)
	{
		char b[ls];
		int k =0;
	for(int j=i;j<i+ls;++j)
	{
		b[k++] = s[j];
	}
		b[k] = '\0';
//		cout<<"The value of b is "<<b<<endl;
		if(strcmp(a,b)<0)
		{
			for(int w =0;w<ls;++w)
			{
				a[w] = b[w]; 
			}
			a[l-2] = '\0';
		}
		
	}
//	cout<<"The value os final a is "<<a<<endl;
	int s1 = 0;
		for(int i=0;i<ls;++i)
		{
			int g = a[i] - '0';
			s1 = s1+ g*pow(10,ls-i-1);
		//	cout<<g<<" "<<s1<<endl;
		}
	//	cout<<s1<<endl;
	std::size_t f = s.find(a);
	if(f==0)
	{
		int h = s[l-2] - '0';
		int p = s[l-1] - '0';
		s1 = s1 + h+p;
	}
	else if(f==1)
	{
		int h = s[0] - '0';
		int p = s[l-1] - '0';
		s1 = s1 + h+p;		
	}
	else
	{
		int h = s[0] - '0';
		int p = s[1] - '0';
		s1 = s1 + h+p;		
	}
	cout<<s1<<endl;
}
