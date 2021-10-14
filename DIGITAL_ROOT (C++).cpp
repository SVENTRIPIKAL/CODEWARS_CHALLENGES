/*  SUM OF DIGITS / DIGITAL ROOT
*   
*   function returns a single-digit integer, if not already,
*   by continually adding each digit within a given number
*   until a single digit remains.
*   
*   [ Example: 945 --> 9 + 4 + 5 = 18 --> 1 + 8 = 9 ]
*   
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>
using namespace std ;

//===================================================[ USER-DEFINED FUNCTIONS ]

int digital_root( int n )
{
    int digital_ROOT ;          string sum_STRING ;
    
    while ( n >= 10 )
    {
        digital_ROOT = 0 ;      string n_STRING = to_string(n) ;
        
        for ( unsigned int i = 0; i < n_STRING.size(); i++ )
        {
            sum_STRING = n_STRING.at(i) ;
            
            digital_ROOT += stoi( sum_STRING ) ;
        }
        
        n = digital_ROOT ;
    }
    
    return n ;
}

//=====================================================================[ MAIN ]

int main()
{
    int x = digital_root( 945 ) ;
    
    cout << x << endl ;
    
    return 0 ;
}