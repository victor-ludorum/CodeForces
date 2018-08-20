#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000
int LMT = 10000;
int flag[MAX / 64];
#define ifcV(x) (flag[x>>6]&(1<<((x>>1)&31))) //to check if prime or not
#define iscV(x) (flag[x>>6]|=(1<<((x>>1)&31))) //To mark as Prime
void sieve() 
{	
    register int i, j, k,count=1;
    for(i = 3; i <LMT; i+=2)
        if(!ifcV(i))
        {
            for(j=i*i, k=i<<1; j < MAX; j+=k) //loop to mark multipiples
                iscV(j);
        }
}
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);	
	sieve();
	int q;   cin>>q;
	while(q--)
	{
		long long n;   cin>>n;
		if(!ifcV(n) || n==1 || n==2)
		{
			cout<<"-1"<<endl;
		}
		else;
	}
}
