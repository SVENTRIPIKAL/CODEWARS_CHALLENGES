/*  SIMPLE MULTIPLICATION
*   
*   function multiplies number
*   by 8 if even and 9 if odd.
*   
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
using namespace std ;

//===================================================[ USER-DEFINED FUNCTIONS ]

int simpleMultiplication( int number )
{
    ( number % 2 == 0 ) ? ( number *= 8 ) : ( number *= 9 ) ;
    
    return number ;
}

//=====================================================================[ MAIN ]

int main()
{
    cout << simpleMultiplication( 2 ) << endl ;
    
    cout << simpleMultiplication( 3 ) << endl ;
    
    return 0 ;
}