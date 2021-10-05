/*  STRING ENDS WITH?
*   function returns true if the first
*   argument passed (string_1) ends with the
*   second argument (string_2).
*   
*   EXAMPLE: solution( 'abc', 'bc' )  { returns true } 
*   
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>
#include <vector>
using namespace std ;

//============================================================[ USER-DEFINED FUNCTIONS ]

bool solution( string string_1, string string_2 )
{
    bool statement ;
    
    int str1_START = ( string_1.size() - string_2.size() ) ;
    int str1_END = ( string_1.size() ) ;
    
    int str2_END = ( string_2.size() ) ;
    
    vector<char> list_1 = {} ;
    vector<char> list_2 = {} ;
    
    for ( int i = 0; i < str2_END; i++ )              // get string 2 argument
    {
        list_2.push_back( string_2[i] ) ;
    }
    
    for ( int i = str1_START; i < str1_END; i++ )     // get string 1 argument
    {
        list_1.push_back( string_1[i] ) ;
    }
    
    ( list_1 == list_2 ) ? ( statement = true ) : ( statement = false ) ;
    
    return statement ;                               // return condition
}

//==============================================================================[ MAIN ]

int main()
{
    string STRING_1 = "abc" ;
    string STRING_2 = "bc" ;
    
    bool CONDITION = solution( STRING_1, STRING_2 ) ;
    
    ( CONDITION == true ) ? ( cout << "true" << endl ) : ( cout << "false" << endl ) ;
    
    return 0 ;
}