#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,v1,v2,t1,t2;    cin>>s>>v1>>v2>>t1>>t2;
	int a = v1*s + 2*t1;
	int b = v2*s + 2*t2;
	if(a>b)
	cout<<"Second"<<endl;
	else if(b>a)
	cout<<"First"<<endl;
	else
	cout<<"Friendship"<<endl;
}
