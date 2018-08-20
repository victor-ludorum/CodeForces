#include<bits/stdc++.h>
using namespace std;
int main()
{
	long x1,y1,x2,x3,y2,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	int s1 = sqrt((y2-y1)*(y2-y1)+(x2-x1)*(x2-x1));
	int s2 = sqrt((y3-y2)*(y3-y2)+(x3-x2)*(x3-x2));
	cout<<s1<<" "<<s2<<endl;
	int r = atan(s1/s2);
	cout<<r<<endl;
	if(r>0)
	cout<<"RIGHT"<<endl;
	else if(r<0)
	cout<<"LEFT"<<endl;
	else
	cout<<"TOWARDS"<<endl;
}
