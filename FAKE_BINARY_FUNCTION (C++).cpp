// Given a string of digits, you should replace any digit
// below 5 with '0' and any digit 5 and above with '1'.
// Return the resulting string.

//INPUT: "45385593107843568", OUTPUT:"01011110001100111".

#include <iostream>
using namespace std;


string convertStringToBinary( string text )
{
    for ( int i = 0; i < text.size(); i++ )
    {
        text[i] = ( (text[i] - '0') > 4 ) ? '1' : '0' ;
    }
    
    return text ;
}



int main()
{
    string text ;
    
    cin >> text ;
    
    while ( true )
    {
        text = convertStringToBinary(text) ;
        
        cout << text << endl ;
        
        cin >> text ;
    }
    
    return 0 ;
}