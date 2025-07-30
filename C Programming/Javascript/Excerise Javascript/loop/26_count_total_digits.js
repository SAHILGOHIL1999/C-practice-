// Accept a value and count total digits.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let digit = parseInt(prompt("Enter a digit : "));
let count = 1;

for(let i = 1; i <= digit; i++){
    if(digit / 10 > 0)
        count++;
    digit = digit / 10;
}
console.log(`Total count of digit ${count}`);
