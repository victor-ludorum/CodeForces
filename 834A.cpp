#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a,b;   cin>>a>>b;
	long long n;  cin>>n;
	long long r = n%4;
	if(a=='v' && b=='<'&&r==1)
	cout<<"cw"<<endl;
	else if(a=='v' && b=='^'&&r==2)
	cout<<"undefined"<<endl;
	else if(a=='v' && b=='>'&&r==3)
	cout<<"cw"<<endl;
	else if(a=='v' && b=='v'&&r==0)
	cout<<"undefined"<<endl;
	
	else if(a=='v' && b=='>'&&r==1)
	cout<<"ccw"<<endl;
	else if(a=='v' && b=='^'&&r==2)
	cout<<"undefined"<<endl;
	else if(a=='v' && b=='<'&&r==3)
	cout<<"ccw"<<endl;
	else if(a=='v' && b=='v'&&r==0)
	cout<<"undefined"<<endl;
	
	else if(a=='<' && b=='v'&&r==1)
	cout<<"ccw"<<endl;
	else if(a=='<' && b=='>'&&r==2)
	cout<<"undefined"<<endl;
	else if(a=='<' && b=='^'&&r==3)
	cout<<"ccw"<<endl;
	else if(a=='<' && b=='<'&&r==0)
	cout<<"undefined"<<endl;
	else if(a=='<' && b=='^'&&r==1)
	cout<<"cw"<<endl;
	else if(a=='<' && b=='v'&&r==3)
	cout<<"cw"<<endl;

	else if(a=='^' && b=='v'&&r==2)
	cout<<"undefined"<<endl;
	else if(a=='^' && b=='>'&&r==1)
	cout<<"cw"<<endl;
	else if(a=='^' && b=='<'&&r==1)
	cout<<"ccw"<<endl;
	else if(a=='^' && b=='^'&&r==0)
	cout<<"undefined"<<endl;
	else if(a=='^' && b=='>'&&r==3)
	cout<<"ccw"<<endl;
	else if(a=='^' && b=='<'&&r==3)
	cout<<"cw"<<endl;
	
	else if(a=='>' && b=='v'&&r==1)
	cout<<"cw"<<endl;
	else if(a=='>' && b=='>'&&r==0)
	cout<<"undefined"<<endl;
	else if(a=='>' && b=='^'&&r==1)
	cout<<"ccw"<<endl;
	else if(a=='>' && b=='<'&&r==2)
	cout<<"undefined"<<endl;
	else if(a=='>' && b=='^'&&r==3)
	cout<<"cw"<<endl;
	else if(a=='>' && b=='v'&&r==3)
	cout<<"ccw"<<endl;
	
}
