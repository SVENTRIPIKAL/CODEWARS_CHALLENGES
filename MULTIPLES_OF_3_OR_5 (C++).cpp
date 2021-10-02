// MULTIPLES OF 3 OR 5
// function to return the sum of
// all numbers divisible by 3 or 5
// below a given number. With 10 as
// an example, {23} is returned as
// the sum of 3, 5, 6, and 9.

#include <iostream>
using namespace std ;

int solution( int number)
{
    int sum = 0 ;
    
    for ( int i = number-1; i > 0; i-- )
    {
        if ( i % 3 == 0 || i % 5 == 0 )
        {
            sum += i ;
        }
    }
    
    return sum ;
}


int main()
{
    int number = 10 ;
    
    int result = solution(number) ;
    
    cout << result << endl ;
    
    return 0 ;
}