// Accept a value and find power of a number using for loop.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let base = parseInt(prompt("Enter the base value: "));
let exponent = parseInt(prompt("Enter the exponent value: "));
let result = 1;

for (let i = 1; i <= exponent; i++) {
    result = result * base;
}

console.log(`${base} raised to the power of ${exponent} is: ${result}`);
