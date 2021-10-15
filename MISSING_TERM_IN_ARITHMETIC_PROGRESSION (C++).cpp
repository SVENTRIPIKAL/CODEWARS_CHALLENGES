/*  MISSING TERM IN ARITHMETIC PROGRESSION
*   
*   function returns the missing term from a list or
*   set of numbers organized by a constant difference,
*   identified as an Arithmetic Progression.
*   
*   [ Example: { 3, 6, 12 } --> 9  ||  { 12, 6, 3 } --> 9 ]
*   
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <vector>
using namespace std ;

//===================================================[ USER-DEFINED FUNCTIONS ]

static long findMissing( vector<long> list )
{
    int difference ;
    
    for (unsigned int i = 0; i < list.size(); i++)
    {
        if ( i == list.size() - 1 )                             { break ; }
        
        if ( i == 0 )              { difference = (list[i+1] - list[i]) ; }
        
        if ( (list[i] + difference) == list[i+1] )           { continue ; }
        
        else                  { return (list[i+1] - difference) ; break ; }
    }
    
    return 0 ;
}

//=====================================================================[ MAIN ]

int main()
{
    long x = findMissing( {12, 6, 3} ) ;
    
    cout << x << endl ;
    
    return 0 ;
}