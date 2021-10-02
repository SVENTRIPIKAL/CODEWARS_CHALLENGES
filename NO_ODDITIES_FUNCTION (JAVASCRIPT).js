// NO ODDITIES 
// returns a new array with all even numbers
function noOdds( values )
{
    let newlist = [] ;
    
    for ( let i = 0; i < values.length; i++ )
    {
        if ( values[i] % 2 === 0 )
        {
            newlist.push( values[i] ) ;
        }
    }
    
    return newlist ;
}



// TESTING OF FUNCTION
let LIST = [ 5, 10, 15, 20, 25, 30 ] ;

let NEWLIST = noOdds( LIST ) ;

console.log( NEWLIST ) ; console.log() ;

for ( let i = 0; i < NEWLIST.length; i++ )
{
    console.log( NEWLIST[i] ) ;
}