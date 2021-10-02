// FAKE BINARY
// converts string of numbers to binary
// returning '0' for numbers 4 or less, 
// and returning '1' for numbers 5 or greater.

function fakeBin( x )
{
    let binary = "" ;
    
    for ( let i = 0; i < x.length; i++ )
    {
        ( x[i] > 4 ) ? (binary += '1') : (binary += '0') ;
    }
    
    return binary ;
}


// TEST
let string = "0123456789" ;

console.log( fakeBin(string) ) ;