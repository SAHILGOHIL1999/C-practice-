"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let i = 1, val = 0, sum = 0;

for (i = 1; i <= 3; i++) {
    val = parseInt(prompt("Enter a value : "));
    sum = sum + val;
}

console.log("Value is " + sum);