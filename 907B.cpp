#include <bits/stdc++.h>
using namespace std;
string s[9];
void print()
{
	for(int i=0;i<9;++i)
	{
		if(i%3==0 && i!=0)
		cout<<endl;
		
		for(int j=0;j<11;++j)
		{
			if(j==3 || j==7)
			cout<<"";
			
			cout<<s[i][j];
		}
		cout<<endl;
	}
}

int main()
{
	for(int i=0;i<9;++i)
	{
		string h,r,t;
		cin>>h>>r>>t;
		string sp=""; 
		sp+=' ';
		s[i] = s[i] + h +sp+r+sp+t;
	}
	
	int x,y;   cin>>x>>y;
	x = x-1; y = y-1;
	x = x%3; y = y%3;
	
// x==0 and y==0	
	if(x==0 && y==0)
	{
		bool flag = false;
		for(int i=0;i<3;++i)
		{
			for(int j=0;j<3;++j)
			{
				if(s[i][j]=='.')
				{
					flag = true;
					s[i][j] = '!';
				}
			}
		}
		
		if(!flag)
		{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<11;++j)
			{
				if(j!=3 && j!=7)
				{
				if(s[i][j]=='.')
				{
					s[i][j] = '!';
				}
			    }
			}
		}			
		}		
		print();
	}

// x==0 and y==1
	if(x==0 && y==1)
	{
		bool flag = false;
		for(int i=0;i<3;++i)
		{
			for(int j=4;j<7;++j)
			{
				if(s[i][j]=='.')
				{
					flag = true;
					s[i][j] = '!';
				}
			}
		}
		
		if(!flag)
		{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<11;++j)
			{
				if(j!=3 && j!=7)
				{
				if(s[i][j]=='.')
				{
					s[i][j] = '!';
				}
			    }
			}
		}			
		}		
		print();
	}

// x==0 and y==2
	if(x==0 && y==2)
	{
		bool flag = false;
		for(int i=0;i<3;++i)
		{
			for(int j=8;j<11;++j)
			{
				if(s[i][j]=='.')
				{
					flag = true;
					s[i][j] = '!';
				}
			}
		}
		
		if(!flag)
		{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<11;++j)
			{
				if(j!=3 && j!=7)
				{
				if(s[i][j]=='.')
				{
					s[i][j] = '!';
				}
			    }
			}
		}			
		}		
		print();
	}

// x==1 and y==0
	if(x==1 && y==0)
	{
		bool flag = false;
		for(int i=3;i<6;++i)
		{
			for(int j=0;j<3;++j)
			{
				if(s[i][j]=='.')
				{
					flag = true;
					s[i][j] = '!';
				}
			}
		}
		
		if(!flag)
		{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<11;++j)
			{
				if(j!=3 && j!=7)
				{
				if(s[i][j]=='.')
				{
					s[i][j] = '!';
				}
			    }
			}
		}			
		}		
		print();
	}

// x==1 and y==1

	if(x==1 && y==1)
	{
		bool flag = false;
		for(int i=3;i<6;++i)
		{
			for(int j=4;j<7;++j)
			{
				if(s[i][j]=='.')
				{
					flag = true;
					s[i][j] = '!';
				}
			}
		}
		
		if(!flag)
		{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<11;++j)
			{
				if(j!=3 && j!=7)
				{
				if(s[i][j]=='.')
				{
					s[i][j] = '!';
				}
			    }
			}
		}			
		}		
		print();
	}

// x==1 and y==2

	if(x==1 && y==2)
	{
		bool flag = false;
		for(int i=3;i<6;++i)
		{
			for(int j=8;j<11;++j)
			{
				if(s[i][j]=='.')
				{
					flag = true;
					s[i][j] = '!';
				}
			}
		}
		
		if(!flag)
		{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<11;++j)
			{
				if(j!=3 && j!=7)
				{
				if(s[i][j]=='.')
				{
					s[i][j] = '!';
				}
			    }
			}
		}			
		}		
		print();
	}

// x==2 and y==0

	if(x==2 && y==0)
	{
		bool flag = false;
		for(int i=6;i<9;++i)
		{
			for(int j=0;j<3;++j)
			{
				if(s[i][j]=='.')
				{
					flag = true;
					s[i][j] = '!';
				}
			}
		}
		
		if(!flag)
		{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<11;++j)
			{
				if(j!=3 && j!=7)
				{
				if(s[i][j]=='.')
				{
					s[i][j] = '!';
				}
			    }
			}
		}			
		}		
		print();
	}

// x==2 and y==1
	if(x==2 && y==1)
	{
		bool flag = false;
		for(int i=6;i<9;++i)
		{
			for(int j=4;j<7;++j)
			{
				if(s[i][j]=='.')
				{
					flag = true;
					s[i][j] = '!';
				}
			}
		}
		
		if(!flag)
		{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<11;++j)
			{
				if(j!=3 && j!=7)
				{
				if(s[i][j]=='.')
				{
					s[i][j] = '!';
				}
			    }
			}
		}			
		}		
		print();
	}

// x==2 and y==2

	if(x==2 && y==2)
	{
		bool flag = false;
		for(int i=6;i<9;++i)
		{
			for(int j=8;j<11;++j)
			{
				if(s[i][j]=='.')
				{
					flag = true;
					s[i][j] = '!';
				}
			}
		}
		
		if(!flag)
		{
		for(int i=0;i<9;++i)
		{
			for(int j=0;j<11;++j)
			{
				if(j!=3 && j!=7)
				{
				if(s[i][j]=='.')
				{
					s[i][j] = '!';
				}
			    }
			}
		}			
		}		
		print();
	}
	
}
