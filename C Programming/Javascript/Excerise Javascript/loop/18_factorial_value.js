// Accept a value and find its factorial value.

"use strict";
const ps = require("prompt-sync");
const prompt = ps();

// Accept a number from the user and calculate its factorial using a for loop.
// The factorial of a number n (denoted as n!) is the product of all positive integers from 1 to n.
// For example, 5! = 5 * 4 * 3 * 2 * 1 = 120.
// If the input is 0, the output should be 1 (as 0! = 1).   

let number = parseInt(prompt("Enter a number to find its factorial: "));
let factorial = 1;

for (let i = 1; i <= number; i++) {
  // factorial *= i;
  factorial = factorial * i;           // Using multiplication to calculate factorial
}

console.log(`The factorial of ${number} is ${factorial}`);  

