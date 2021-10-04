#include <iostream>
#include <string>
#include <vector>
using namespace std ;

string highAndLow( string numbers )
{
    string newString = "" ;                // new string to be returned
    int highest = 0 ;                      // holds highest number
    int lowest = 0 ;                       // holds lowest number
    int stringLength = numbers.size() ;    // string length
    vector<int> NUMBERS = {} ;             // holds all numbers to compare
    
    // iterate through each index of entire string
    for ( int i = 0; i < stringLength; i++)
    {
        // skip to next index if SPACE or '-' is found
        if ( numbers[i] == ' ' || numbers[i] == '-' ) { continue ; } ;
        
        string iteration = "" ;                      // create empty string
        
        // IF: get entire negative integer if previous index was a '-'
        if ( numbers[i-1] == '-' )
        {
            // concate '-' with current index's number to empty string
            iteration.append( "-" ) ;
            iteration.push_back( numbers[i] ) ;
            
            // continue concation while following indices hold numbers
            while ( (numbers[i+1] != ' ') && (i != stringLength) )
            {
                iteration.push_back( numbers[i+1] ) ; // concate to string
                
                i++ ;                                 // continue to next index
            }
            
            // convert entire string to an integer
            int stringINT = stoi( iteration ) ;
            
            NUMBERS.push_back( stringINT ) ;          // send to end of array
        }
        
        // ELSE: get entire positive integer if previous index was not a '-'
        else if ( numbers[i-1] != '-' )
        {
            // concate iteration with current index's number
            iteration.push_back( numbers[i] ) ;
            
            // continue concation while following indices hold numbers
            while ( (numbers[i+1] != ' ') && (i != stringLength) )
            {
                iteration.push_back( numbers[i+1] ) ; // concate to string
                
                i++ ;                                 // continue to next index
            }
            
            // convert entire string to an integer
            int stringINT = stoi( iteration ) ;
            
            NUMBERS.push_back( stringINT ) ;          // send to end of array
        }
    }
    
    int arrayLength = NUMBERS.size() ;
    
    // iterate through array to assign Highest & Lowest numbers
    for ( int i = 0; i < arrayLength; i++ )
    {
        // assign Highest/Lowest to first number in array
        if ( i == 0 ) { (lowest = NUMBERS[i]); (highest = NUMBERS[i]); }
        
        // continue with comparisons thereafter
        else if ( NUMBERS[i] > highest ) { highest = NUMBERS[i]; }
        
        else if ( NUMBERS[i] < lowest ) { lowest = NUMBERS[i]; } ;
    }
    
    string highestString = to_string( highest ) ;
    string lowestString = to_string( lowest ) ;
    
    newString.append(highestString) ;               // assign to newString
    newString.append(" ") ;
    newString.append(lowestString) ;
    
    return newString ;                              // return newString
}