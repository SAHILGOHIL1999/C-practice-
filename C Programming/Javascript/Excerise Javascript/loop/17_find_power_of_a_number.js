// Accept a value and find power of a number using for loop.

"use strict";
const ps = require("prompt-sync");
const prompt = ps();

// Accept a base and exponent value from the user and calculate the power using a for loop.
// The formula for power is: base^exponent = base * base * ... (exponent times) 
// For example, if base is 2 and exponent is 3, the result will be 2 * 2 * 2 = 8.
// If the exponent is 0, the result should be 1 (as any number raised to the power of 0 is 1).
// If the exponent is negative, the result should be a fraction (e.g., 2^-3 = 1/(2^3) = 1/8 = 0.125). 
   
let base = parseInt(prompt("Enter base value: "));
let exponent = parseInt(prompt("Enter exponent value: "));

let result = 1;
for (let i = 1; i <= exponent; i++) {
    result *= base;
}

console.log(`${base} raised to the power of ${exponent} is ${result}`);
// Example: If base is 2 and exponent is 3, output will be "2 raised to the power of 3 is 8"
// Example: If base is 5 and exponent is 4, output will be "5 raised to the power of 4 is 625"
// Example: If base is 10 and exponent is 0, output will be "10 raised to the power of 0 is 1"
// Example: If base is 3 and exponent is 5, output will be "3 raised to the power of 5 is 243"
// Example: If base is 7 and exponent is 2, output will be "7 raised to the power of 2 is 49"  