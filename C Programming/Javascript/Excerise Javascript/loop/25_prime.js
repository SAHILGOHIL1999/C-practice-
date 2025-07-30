// // Accept a value and find whether it is prime or not.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();


let number = parseInt(prompt("Enter a value : "));
let isPrime = true;

// if (number <= 1) {
//     isPrime = false; // 0 and 1 are not prime numbers
// } else {

//     for (let i = 2; i <= Math.sqrt(number); i++) {
//         if (number % i === 0) {
//             isPrime = false; // If divisible by any number other than 1 and itself, it's not prime
//             break;
//         }
//     }
// }

// if (isPrime) {
//     console.log(number + " is a prime number.");
// } else {
//      console.log(number + " is not a prime number.");
// } 

// for(let i = 1; i <= number; i++) {
//     if(number % i === 0) {
//         if(i === 1 || i === number) {
//             continue; // Skip 1 and the number itself
//         } else {
//             isPrime = false; // Found a divisor other than 1 and the number itself
//             break;
//         }
//     }
// }

// if(isPrime && number > 1) {
//     console.log(number + " is a prime number.");
// } else {
//     console.log(number + " is not a prime number.");
// }


for (let i = 1; i <= number; i++) {
    if (number % 2 == 0) {
        isPrime = false;
        break;
    }
}

if (isPrime == true)
    {
        console.log(number + " is a prime number.");
    } 
    else 
    {
        console.log(number + " is not a prime number.");
    }