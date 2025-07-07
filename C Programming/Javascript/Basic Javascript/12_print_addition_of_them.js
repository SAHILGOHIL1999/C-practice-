// Accept a two values and store in thried variable and print addition of them.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val1 = prompt("Enter the 1st value:");
let val2 = prompt("Enter the 2nd value:");

// to convert input into integer, use parseInt
let sum = parseInt(val1) + parseInt(val2);

console.log("sum of " + val1 + " and " + val2 + " is " + sum);