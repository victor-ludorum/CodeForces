#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;   cin>>n; n= n+1;
	vector<int> r;
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p])
          r.push_back(p);
      
      int c=1;
	 map<int,int> m;  
	 for(int i=0;i<r.size();++i)
	 { m[r[i]]++; }
	   		bool f = false;
    for(int i=0;i<r.size();++i)
	{

       for(int j=r[i]*2;j<=n;j+=r[i])
       {
       	if(m[j]<1)
       	 {
       	   m[j] = 2;
       	   f = true;
         }
	   }
    } 
	if(f)
	   c++;     
    cout<<c<<endl;
    for(int i=2;i<=n;++i)
    cout<<m[i]<<" ";
}
