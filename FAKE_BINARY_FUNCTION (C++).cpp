// FAKE BINARY
// converts string of numbers to binary
// returning '0' for numbers 4 or less, 
// and returning '1' for numbers 5 or greater.

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
