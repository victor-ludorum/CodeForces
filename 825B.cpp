#include <bits/stdc++.h>
using namespace std;
int main()
{
	char a[10][10];
	for(int i=0;i<10;++i)
	{
		for(int j=0;j<10;++j)
		  cin>>a[i][j];
	}
	
	for(int i=0;i<10;++i)
	{
		int c=0,d=0;
		for(int j=0;j<5;++j)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		c=0;  d=0;
		for(int j=1;j<6;++j)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
	
		c=0;  d=0;
		for(int j=2;j<7;++j)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
		c=0;  d=0;
		for(int j=3;j<8;++j)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
		c=0;  d=0;
		for(int j=4;j<9;++j)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
		c=0;  d=0;
		for(int j=5;j<10;++j)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
    }
    
    	for(int j=0;j<10;++j)
	{
		int c=0,d=0;
		for(int i=0;i<5;++i)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		c=0;  d=0;
		for(int i=1;i<6;++i)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
	
		c=0;  d=0;
		for(int i=2;i<7;++i)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
		c=0;  d=0;
		for(int i=3;i<8;++i)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
		c=0;  d=0;
		for(int i=4;i<9;++i)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
		c=0;  d=0;
		for(int i=5;i<10;++i)
		{
			if(a[i][j]=='X')
			c++;
			if(a[i][j]=='.')
			d++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
			
	}
	
	for(int i=0;i<6;++i)
	{
		int k = i,c=0,d=0;
		for(int j=0;j<5;++j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		c=0; d=0; k=i;
		for(int j=1;j<6;++j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
	
		c=0; d=0; k=i;
		for(int j=2;j<7;++j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
		c=0; d=0; k=i;
		for(int j=3;j<8;++j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
	
		c=0; d=0; k=i;
		for(int j=4;j<9;++j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
	
		c=0; d=0; k=i;
		for(int j=5;j<10;++j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
	}
	
	for(int i=0;i<6;++i)
	{
		int k = i,c=0,d=0;
		for(int j=9;j>=5;--j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		c=0; d=0; k=i;
		for(int j=8;j>=4;--j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
	
		c=0; d=0; k=i;
		for(int j=7;j>=3;--j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
		c=0; d=0; k=i;
		for(int j=6;j>=2;--j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
	
		c=0; d=0; k=i;
		for(int j=5;j>=1;--j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
	
		c=0; d=0; k=i;
		for(int j=4;j>=0;--j)
		{
			if(a[k][j]=='X')
			c++;
			if(a[k][j]=='.')
			d++;
			k++;
		}
		if(c==4 && d==1)
		{
			cout<<"YES"<<endl; return 0;
		}
		
	}
		
      cout<<"NO"<<endl;
}
