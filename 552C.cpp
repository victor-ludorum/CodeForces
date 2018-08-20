#include <bits/stdc++.h>
using namespace std;
void solve ( int w , int m)
{
	// checking all three possibilities
	while ( m )
	{
		if( (m-1) % w == 0)
		{
			m = (m-1) / w;
		}
		else if ( (m+1) % w == 0)
		{
			m = (m+1) / w;
		}
		else if ( m % w == 0)
		{
			m = m / w ;
		}
		else
		break; // all the possibilities doesn't exist .
	}
	// if m is not zero means
	// it can't be represented in terms of
	// powers of w .
	if( m )
	cout << "NO" << endl;
	else
	cout << "YES" << endl;	
}
int main()
{
	int w = 3 , m = 7 ;
	solve(w,m);
}
