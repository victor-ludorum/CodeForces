#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x,y,p,q;   cin>>a>>b>>x>>y>>p>>q;
    if((x+p<=a && y<=b && q<=b)||(x+q<=a && y<=b && p<=b)||(x+p<=b && y<=a && q<=a)||(x+q<=b && y<=a && p<=a))
	cout<<"YES"<<endl;
	else if((y+p<=a && x<=b && q<=b)||(y+q<=a && x<=b && p<=b)||(y+p<=b && x<=a && q<=a)||(y+q<=b && x<=a && p<=a))	
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
