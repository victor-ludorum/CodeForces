#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y;  cin>>x>>y;
	int i=2,b=y,c;
	for(;y<=x;++i)c=b,b=y,y=y+c-1;
	cout<<i<<endl;
}
