#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;   cin>>x>>y;
	if(x==0||y==0)
	{
		cout<<"black"<<endl;
	}
	else if(x>=0&&y>=0)
	{
		for(int i=1;i<=10000;++i)
		{
			long d = x*x + y*y - i*i;
			if(d<0 && (i%2!=0))
			{
			cout<<"black"<<endl;
			break;
		    }
			else if(d<0)
			{
			cout<<"white"<<endl;
			break;}
			if(d==0)
			{
			cout<<"black"<<endl;
			break;				
						}						
		}
	}
	else if(x<=0&&y>=0)
	{
		for(int i=1;i<=10000;++i)
		{
			long d = x*x + y*y - i*i;
			if(d==0)
			{
			cout<<"black"<<endl;
			break;				
						}						
			if(d<0 && (i%2!=0))
			{
			cout<<"white"<<endl;
			break;}		
			else if(d<0)
			{
			cout<<"black"<<endl;
			break;
		    }

		}
	}
	else if(x<=0&&y<=0)
	{
		for(int i=1;i<=10000;++i)
		{
			long d = x*x + y*y - i*i;
			if(d==0)
			{
			cout<<"black"<<endl;
			break;				
						}						
			if(d<0 && (i%2!=0))
			{
			cout<<"black"<<endl;
			break;
		    }			
			else if(d<0)
			{
			cout<<"white"<<endl;
			break;}		
		}
	}
	else if(x>=0&&y<=0)
	{
		for(int i=1;i<=10000;++i)
		{
			long d = x*x + y*y - i*i;

			if(d<0 && (i%2!=0))
			{
			cout<<"white"<<endl;
			break;}
			else if(d<0)
			{
			cout<<"black"<<endl;
			break;
		    }
			if(d==0)
			{
			cout<<"black"<<endl;
			break;				
						}			
		}
	}
	
}
