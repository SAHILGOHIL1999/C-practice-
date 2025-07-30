// Accept a value and print sum of all digits.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let number = parseInt(prompt("Enter a digit : "));
let sum = 1;
let digit = 0;

for (let i = 1; i <= number; i++) {
    digit = parseInt(number % 10);
    sum = parseInt(sum + digit);
    number = parseInt(number / 10);
}
console.log(`Moduler of digit ${digit},`);
console.log(`Total sum of digit ${sum},`);
console.log(`Total count of digit ${number}.`);

