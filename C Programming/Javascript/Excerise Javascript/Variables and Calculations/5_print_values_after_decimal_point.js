// Accept a decimal value and print values after decimal point.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let deciaml = prompt("Enter decimal value : ");
let temp = 0;
let result = 0.0;

temp = parseInt(deciaml);
result = deciaml - temp;
console.log("Value after decimal point is " + result);

// console.log("Value after decimal point is " + result.toFixed(2));

// console.log("After decimal value is " + parseFloat(deciaml));