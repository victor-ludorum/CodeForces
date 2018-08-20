#include <bits/stdc++.h>

using namespace std;
int main()
{
//	string s ;  cin >> s ;  int n = s.length() ;
   char s[] = "124" ; int n = strlen(s) ;
	int count = 0 ; 
	// In the first loop we will count number of 0's , 4's and 8's are present in the string and increases the count .
	for( int i = 0 ; i < n ; ++i )
	{
		if( s[i] == '4' || s[i] == '8' || s[i] == '0' )
			count++ ;
	}
	// In second loop we will make consecutive pairs of two characters and convert it into integer and store it
	// in variable h . Then we check whether h is divisible by 4 or not . If h is divisible we increases the count
	// with ( i + 1 ) .
	for( int i = 0 ; i < n - 1 ; ++i )
	{
	   int h = ( s[i] - '0' ) * 10 + ( s[i+1] - '0' ); 
	   if( h % 4 == 0 )  count = count + i + 1 ;
	}
	cout << count << "\n";
}
