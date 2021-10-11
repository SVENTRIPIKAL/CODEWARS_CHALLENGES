/*  MOVE ZEROES TO END
*   
*   function moves all zeros within an
*   array to the end while preserving
*   element order.
*   
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <vector>
using namespace std ;

//=======================================================[ USER-DEFINED FUNCTIONS ]

vector<int> move_zeroes( vector<int> list )
{
    vector<int> solution = {} ;
    
    for ( unsigned int t = 0; t < 2; t++ )
    {
        for ( unsigned int i = 0; i < list.size(); i++ )
        {
            if ( (t != 1) && (list[i] != 0) )       { solution.push_back( list[i] ) ; }
            
            else if ( (t == 1) && (list[i] == 0) )  { solution.push_back( list[i] ) ; }
        }
    }
    
    return solution ;
}

//=========================================================================[ MAIN ]

int main()
{
    vector<int> solution = { 1, 0, 1, 2, 0, 1, 3 } ;
    
    vector<int> x = move_zeroes( solution ) ;
    
    for ( int i = 0; i < x.size(); i++ )
    {
        cout << x[i] << " " ;
    }
    
    cout << endl ;
    
    return 0 ;
}