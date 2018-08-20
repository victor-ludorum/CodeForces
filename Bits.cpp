#include<iostream>
main()
{
long long n,l,r,i,j,a;
std::cin>>n;
for(i=1;i<=n;i++)
{
std::cin>>l>>r;
int k = 2;
k = k + ~k;
std::cout<<k<<"\n";
for(j=l;j<=r;j+=~j&-~j)
  {
	  a=j;
	  std::cout<<"The value of j is "<<j<<"\n";
	  std::cout<<"The value of a is "<<a<<"\n";}
      std::cout<<a<<"\n";
}
}
