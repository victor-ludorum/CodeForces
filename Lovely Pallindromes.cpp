#include <bits/stdc++.h>
using namespace std;

void evenlength( char s[] , int n)
{
	// string r to store resultant
	// palindrome
	string r ; 
	int i ;
	// In this loop string r stores 
	//  string s .
	for( i = 0 ; i < n ; ++i )
	  r += s[i] ;
	// In this loop string r stores 
	//  reverse of string s behind the
	// string s in consecutive manner .	  
	for( int j = i-1 ; j >= 0 ; --j )
	  r += s[j] ;
	  
	cout << r << endl; 
	 
}
// Driver program to check above code 
int main()
{
	char s[] = "10";
	int l = strlen(s);
	evenlength( s , l );
}
