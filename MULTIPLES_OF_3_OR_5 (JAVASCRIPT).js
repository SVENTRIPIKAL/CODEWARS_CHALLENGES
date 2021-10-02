// MULTIPLES OF 3 OR 5
// function to return the sum of
// all numbers divisible by 3 or 5
// below a given number. With 10 as
// an example, {23} is returned as
// the sum of 3, 5, 6, and 9.

function solution(number)
{
    let sum = 0 ;
    
    for ( let i = number-1; i > 0; i-- )
    {
        if ( i % 3 == 0 || i % 5 == 0 )
        {
            sum += i ;
        }
    }
    
    return sum ;
}


let number = 10 ;

console.log( solution(number) ) ;