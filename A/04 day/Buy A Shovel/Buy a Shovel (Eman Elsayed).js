// Author: Eman Elsayed

// take input from user
let k = prompt();
let r = prompt();

// loop over numbers from 1 to k
for ( let i = 1; i <= k; i++ )
{
    // check if the number is divisible by k or the last digit is r
    if ( ( i * k ) % 10 === 0 || ( i * k ) % 10 === r )
    {
        // print the number
        console.log(i);
        break;
    }
}
