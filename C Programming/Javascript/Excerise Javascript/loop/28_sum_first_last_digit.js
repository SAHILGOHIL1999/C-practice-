// Accept a value and print sum of first and last digit.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let number = parseInt(prompt("Enter a number : "));

// Get last digit
let last_digit = number % 10;

// Get first digit
let first_digit = number;

while (first_digit >= 10) {
    // first_digit = parseInt(first_digit / 10);
    first_digit = Math.floor(first_digit / 10);
}

let sum = first_digit + last_digit;

console.log(`First digit: ${first_digit}`);
console.log(`Last digit: ${last_digit}`);
console.log(`Sum of first and last digit: ${sum}`);