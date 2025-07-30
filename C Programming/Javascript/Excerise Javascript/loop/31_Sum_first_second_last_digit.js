//  Accept a value and print sum of first and second last digit.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let num = parseInt(prompt("Enter number: "));
let originalNum = num;  // Store original number

// Step 1: Get second last digit
let secondLastDigit = Math.floor((num % 100) / 10);

// Step 2: Get first digit
let firstDigit = num;

while (firstDigit >= 10) {
    firstDigit = Math.floor(firstDigit / 10);
}

// Step 3: Sum
let sum = firstDigit + secondLastDigit;

// Output
console.log(`First digit: ${firstDigit}`);
console.log(`Second last digit: ${secondLastDigit}`);
console.log(`Sum: ${sum}`);
