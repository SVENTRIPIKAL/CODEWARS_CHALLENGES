/*  SUM OF DIGITS / DIGITAL ROOT
*   
*   function returns an integer and continually
*   reduces a number until only one digit remains
*   by adding together each digit within the whole number.
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
    int digital_ROOT ;       string sum_STRING ;
    
    string n_STRING = to_string( n ) ;
    
    while ( n_STRING.size() != 1 )
    {
        digital_ROOT = 0 ;
        
        for ( unsigned int i = 0; i < n_STRING.size(); i++ )
        {
            sum_STRING = n_STRING.at(i) ;
            
            digital_ROOT += stoi( sum_STRING ) ;
        }
        
        n_STRING = to_string( digital_ROOT ) ;
    }
    
    return stoi( n_STRING ) ;
}

//=====================================================================[ MAIN ]

int main()
{
    int x = digital_root( 945 ) ;
    
    cout << x << endl ;
    
    return 0 ;
}