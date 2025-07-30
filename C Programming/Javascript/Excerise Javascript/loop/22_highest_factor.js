// Accept a value and find highest factor

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let number = parseInt(prompt("Enter a number to find highest factor: "));
let highestFactor = 1;

for (let i = 1; i <= number; i++) {
    if (number % i == 0) {
        console.log(i); // Print each factor
        // Update highest factor if current factor is greater
        if (i > highestFactor)
        highestFactor = i;
    }
}

console.log(`The highest factor of ${number} is ${highestFactor}.`);