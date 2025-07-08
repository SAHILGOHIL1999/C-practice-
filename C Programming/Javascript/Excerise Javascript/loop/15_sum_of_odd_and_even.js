// Accept 10 values and print sum of odd and even numbers.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = 0, sume = 0, sumo = 0;

for (let i = 1; i <= 10; i++) {
    val = parseInt(prompt("Enter a value : "));

    if (val % 2 == 0)
        sume = sume + val;

    else
        sumo = sumo + val;
}

console.log(`Sum of odd number ${sumo}`);
console.log(`Sum of even number ${sume}`);
