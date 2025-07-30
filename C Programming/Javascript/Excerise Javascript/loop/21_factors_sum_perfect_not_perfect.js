// Accept a value and find whether it is perfect no or not.

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
if (sum == number) {
    console.log(`${number} is a perfect number.`);
} else {
    console.log(`${number} is not a perfect number.`);
}       
// Example: If input is 6, output will be "6 is a perfect number." (as factors are 1, 2, 3 and their sum is 6)
// Example: If input is 12, output will be "12 is not a perfect number." (as factors are 1, 2, 3, 4, 6 and their sum is 16)