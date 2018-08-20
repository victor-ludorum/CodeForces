#include <bits/stdc++.h>
using namespace std;
bool collinear(long double x1, long double y1, long double x2, long double y2, long double x3, long double y3) {
  return (y1 - y2) * (x1 - x3) == (y1 - y3) * (x1 - x2);
}
int main()
{
	long double a,b,c,d,e,f;   cin>>a>>b>>c>>d>>e>>f;
	long double h = sqrt(pow((a-c),2) + pow((b-d),2));
	long double t = sqrt(pow((e-c),2) + pow((d-f),2));
    // cout<<collinear(a,b,c,d,e,f)<<endl;
	if(h==t && !collinear(a,b,c,d,e,f))
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
