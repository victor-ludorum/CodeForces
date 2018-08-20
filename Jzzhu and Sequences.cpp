#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int x,y,z,n;    cin>>x>>y>>n;
   long long int r = (long long int)n%6;
   switch(r)
   {
   	case 1:z=x;break;
   	case 2:z=y;break;
   	case 3:z=(long long int)(y-x);break;
   	case 4:z=-x;break;
   	case 5:z=-y;break;
   	case 0:z=(long long int)(x-y);break;
   }
   if(z<0)
   {
   if(abs(z)<=1000000007)  
   z= 1000000007 + z;
   else
   {
   z = 1000000007 - abs(z)%1000000007;
   }
   }
   else
   z=z%1000000007;
   cout<<z<<endl;
}
