/*  CONVERTING STRING TO CAMEL CASE
*   
*   function converts strings with dashes
*   and underscores to camel case; the first
*   word being capitalized only if initially capitalized.
*   
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>
using namespace std ;

//=======================================================[ USER-DEFINED FUNCTIONS ]

string stringToCamel( string text )
{
    string solution = "" ;
    
    for ( unsigned int i = 0; i < text.size(); i++ )
    {
        if ( text[i] == '-' || text[i] == '_' )             { continue ; }
        
        if ( (i != 0) && (text[i-1] == '-' || text[i-1] == '_') )
        {
            solution.push_back( toupper( text[i] ) ) ;
            
            continue ;
        }
        
        solution.push_back( text[i] ) ;
    }
    
    return solution ;
}

//=========================================================================[ MAIN ]

int main()
{
    string phrase = "string_is-now_camel-case" ;
    
    string solution = stringToCamel( phrase ) ;
    
    cout << solution << endl ;
    
    return 0 ;
}
