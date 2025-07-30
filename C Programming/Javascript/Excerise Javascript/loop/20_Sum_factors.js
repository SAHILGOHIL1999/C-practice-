// Accept a value and find sum of all factors.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let number = parseInt(prompt("Enter a number to find sum for factor: "));
let sum = 0;

for (let i = 1; i <= number; i++) {
    if (number % i == 0) {
        console.log(i);
        sum = sum + i;
    }
}
console.log("Sum of all factors " + sum);