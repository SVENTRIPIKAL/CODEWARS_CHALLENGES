// Write a small function that returns the values
// of an array that are not odd. All values in the
// array will be integers. Return the good values
// in the order they are given.


#include <iostream>
#include <vector>       // use vectors instead of standard C arrays
using namespace std ;


vector<int> returnEvensInArray( vector<int> list )
{
    vector<int> newList = {} ;
    
    for ( int i = 0; i < list.size(); i++ )
    {
        if ( list[i] % 2 == 0 )
        {
            newList.push_back( list[i] ) ;
        }
    }
    
    return newList ;
}


int main()
{
    
    vector<int> list = { 5, 10, 15, 20, 25, 30 } ;
    
    vector<int> newlist = returnEvensInArray( list ) ;
    
    for ( int i = 0; i < newlist.size(); i++ )
    {
        cout << newlist[i] << " " ;
    }
    
    cout << endl ;
    
    return 0 ;
}