#include <bits/stdc++.h>
using namespace std;
long long  binomialCoeff(long long  n, long long  k)
{
    long long  res = 1;
 
    // Since C(n, k) = C(n, n-k)
    if ( k > n - k )
        k = n - k;
 
    // Calculate value of [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
    for (long long  i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}
 int  main()
{
	long long  n;   cin>>n;
	long long r = binomialCoeff(n,5) + binomialCoeff(n,6) + binomialCoeff(n,7);
	cout<<r<<endl; 
}
