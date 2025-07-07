// Accept 10 values and count positive and negative numbers.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = 0;
let positiveCount = 0;
let negativeCount = 0;

for (let i = 1; i <= 10; i++) {
    val = parseInt(prompt("Enter value " + i + ": "));

    if (val > 0)
    {
        positiveCount++;
    } 
    
    else if (val < 0) 
    {
        negativeCount++;
    }
}

console.log("Total Positive Numbers: " + positiveCount);
console.log("Total Negative Numbers: " + negativeCount);