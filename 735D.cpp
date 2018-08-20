#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<stdlib.h>
#include<algorithm>
#include<vector>
#define pc(x) putchar;
#ifndef ONLINE_JUDGE
#define getcx getchar
#endif
using namespace std;
#define SET(a,n) memset((a),n,sizeof(a))
#define pb push_back
#define SIZE(v) v.size()
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
#define each(it,o) for(auto it= (o).begin(); it != (o).end(); ++ it)
#define all(o) (o).begin(), (o).end()
#define mp(x,y) make_pair((x),(y))
#define mset(m,v) memset(m,v,sizeof(m))
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
#define F first
#define S second
#define ull unsigned long long int
#define lli long long int
#define li long int
#define ii int
#define mod 1000000007
 
inline int inp()    // t = inp();
{
   int n=0;
   int ch=getcx();int sign=1;
   while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}
 
   while(  ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
   return n*sign;
}
 
inline long long in()
{
   long long n=0;
   long long ch=getcx();long long sign=1;
   while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}
 
   while(  ch >= '0' && ch <= '9' )
           n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
   return n*sign;
}
 
inline void write (lli n)  // write(ans)
{
    lli N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0');return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
 
/* http://discuss.codechef.com/questions/20106/fast-string-input */
/* fast string input using getchar_unlocked */
inline string ip()
{
    string s = "";
    int temp=getchar();
    while ( temp<'a'||temp>'z' )
        temp = getchar();
    while ( temp>='a'&&temp<='z' )
    {
        s += (char)temp;
        temp = getchar();
    }
    return s;
}
 
bool isPrime(int n)  // AKS implementation for prime number
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip 
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}
int main()
{
	
	lli n;   n = in();
	if(n%2==0)
	{
		if(n==2)
		{
			write(1);
		}
		else
		write(2);
	}
	else if (isPrime(n))
	{
		write(1);
	}
	else
	{
		if(isPrime(n-2))
		write(2);
		else
		write(3);
	}
}
