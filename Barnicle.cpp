#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;  cin>>s;
	int p,d;   int e =0;
	for(int i=0;i<s.length();++i)
	{
		if(s[i]=='.')
		d = i;
		if(s[i]=='e')
		p=i;
	}
	for(int i=p+1;i<s.length();++i)
	{
			e =  s[i]-'0'+ e*10;		
	}
//	cout<<e<<" "<<p-d<<" "<<d<<" "<<p<<endl;
    if(e>((p-1)-d))
    {
    	for(int k=0;k<p;++k)
    	{
    		if(s[k]!='.')
    		cout<<s[k];
		}
		for(int k=0;k<(e-((p-1)-d));++k)
		   cout<<"0";
	}
	else
	{
	
	int i;
	for(i=d;i<d+e;++i)
	{
		s[i] = s[i+1];
	}
	bool flag = false;
//	cout<<i<<endl;
	for(int j=i+1;j<p&&!flag;++j)
	{
		if(s[j]=='1'||s[j]=='2'||s[j]=='3'||s[j]=='4'||s[j]=='5'||s[j]=='6'||s[j]=='7'||s[j]=='8'||s[j]=='9')
		   {  s[i] = '.';  
		      flag = true;   }
	}
	if(!flag)  p=i;
	for(int k=p-1;k>=i;--k)
	{
		if(s[k]!='0')
		{
	//		cout<<"Hello"<<endl;
			p=k+1;  break;
		}
	}
//	cout<<p<<endl;
/*	for(int k=0;k<p;++k)
	{
		cout<<s[k];
	}                    
	cout<<endl;   */
	int q=0;
	for(int k=0;k<p;++k)
	if(s[k]!='0')
	{
		if(s[k]=='.')
		  { q = k-1;  break;}
		else
		    {  q = k;   break;} 
	}
//	cout<<q<<" "<<p<<endl;
	for(int k=q;k<p;++k)
	cout<<s[k];
    }
}
