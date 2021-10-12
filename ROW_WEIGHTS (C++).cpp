/*  ROW WEIGHTS
*   
*   function separates a single vector into
*   two groups by consecutive assignment (1,2,1,2,etc), and
*   returns the total of each group. In the given example,
*   the total being returned is each team's total weight.
*   
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <vector>
#include <utility>
using namespace std ;

//===================================================[ USER-DEFINED FUNCTIONS ]

pair<int, int> rowWeights( const vector<int> &weights )
{
    pair<int, int> team(0, 0) ;
    
    for ( unsigned int i = 0; i < weights.size(); i++ )
    {
        ( i % 2 == 0 ) ? ( team.first += weights[i] )
                       : ( team.second += weights[i] ) ;
    }
    
    return team ;
}

//=====================================================================[ MAIN ]

int main()
{
    pair<int, int> teamWeight = rowWeights({13, 27, 49}) ;
    
    cout << teamWeight.first << ", " << teamWeight.second << endl ;
    
    return 0 ;
}