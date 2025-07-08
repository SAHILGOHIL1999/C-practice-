// Accept 10 values and count total positive, negative and zero values.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = 0;
let positiveCount = 0;
let negativeCount = 0;
let zeroCount = 0;

for (let i = 1; i <= 10; i++) {
    val = parseInt(prompt("Enter value " + i + ": "));

    if (val > 0)
        positiveCount++;

    else if (val < 0)
        negativeCount++;

    else
        zeroCount++;

}

console.log("Total Positive Numbers: " + positiveCount);
console.log("Total Negative Numbers: " + negativeCount);
console.log("Total Zero : " + zeroCount);
