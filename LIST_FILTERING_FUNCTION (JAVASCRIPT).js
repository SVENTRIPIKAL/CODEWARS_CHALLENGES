// LIST FILTERING
// function receives a list
// of positive integers and
// strings, and returns the
// same list with all strings
// removed.

function removeStrings( list )
{
    let newList = [] ;
    
    for ( let i = 0; i < list.length; i++ )
    {
        if ( typeof list[i] === 'string' )
        {
            continue ;
        }
        
        newList.push( list[i] ) ;
    }
    
    return newList ;
}


//MINI-TEST
let LIST = [ 'a', 'b', 'c', 1, 2, 3 ] ;

let NEWLIST = removeStrings( LIST ) ;

console.log( NEWLIST ) ;
