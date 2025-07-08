// Accept 10 values and count odd and even numbers.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let oddcount = 0;
let evencount = 0;
let val = 0;

for (let i = 1; i <= 10; i++) {
    val = parseInt(prompt("Enter a value : "));

    if (val % 2 == 0)
        oddcount++;

    else
        evencount++;
}

console.log(`Total odd of number ${oddcount}`);
console.log(`Total even of number ${evencount}`);