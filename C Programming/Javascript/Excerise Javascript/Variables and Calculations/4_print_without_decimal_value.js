// Accept a decimal value and print it without decimal values. 

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let decimal = prompt("Enter a deciaml value : ");

console.log("Not decimal value :" + parseFloat(decimal));