// HIGHEST AND LOWEST NUMBERS
// function returns a string of the
// highest and lowest numbers from a
// string containing numbers, dashes, & spaces.

function highAndLow( numbers )
{
    let newString = "" ;                // new string to be returned
    let highest = "" ;                  // holds highest number
    let lowest = "" ;                   // holds lowest number
    let NUMBERS = [] ;                  // holds all numbers to compare
    
    // iterate through each index of entire string
    for ( let i = 0; i < numbers.length; i++)
    {
        // skip to next index if SPACE or '-' is found
        if ( numbers[i] === " " || numbers[i] === "-" ) { continue } ;
        
        let iteration = "" ;                    // create empty string
        
        // IF: get entire negative integer if previous index was a '-'
        if ( numbers[i-1] === "-" )
        {
            // concate '-' with current index's number to empty string
            iteration += numbers[i-1] + numbers[i] ;
            
            // continue concation while following indices hold numbers
            while ( (numbers[i+1] !== " ") && (i !== numbers.length) )
            {
                iteration += numbers[i+1] ;     // concate number to string
                
                i++ ;                           // continue to next index
            }
            
            // convert entire string to an integer
            iteration = parseInt( iteration ) ;
            
            NUMBERS.push( iteration ) ;         // send to end of array
        }
        
        // ELSE: get entire positive integer if previous index was not a '-'
        else if ( numbers[i-1] !== "-" )
        {
            // concate iteration with current index's number
            iteration += numbers[i] ;
            
            // continue concation while following indices hold numbers
            while ( (numbers[i+1] !== " ") && (i !== numbers.length) )
            {
                iteration += numbers[i+1] ;     // concate number to string
                
                i++ ;                           // continue to next index
            }
            
            // convert entire string to an integer
            iteration = parseInt( iteration ) ;
            
            NUMBERS.push( iteration ) ;         // send to end of array
        }
    }
    
    // iterate through array to assign Highest & Lowest numbers
    for ( let i = 0; i < NUMBERS.length; i++ )
    {
        // assign Highest/Lowest to first number in array
        if ( i === 0 ) { (lowest = NUMBERS[i]) && (highest = NUMBERS[i]) }
        
        // continue with comparisons thereafter
        else if ( NUMBERS[i] > highest ) { highest = NUMBERS[i] }
        
        else if ( NUMBERS[i] < lowest ) { lowest = NUMBERS[i] } ;
    }
    
    newString = highest + " " + lowest ;        // assign to newString
    
    return newString ;                          // return newString
}


//MINI-TEST
let STRING = "-25 -5000 20000" ;

let NEWSTRING = highAndLow( STRING ) ;

console.log( NEWSTRING ) ;