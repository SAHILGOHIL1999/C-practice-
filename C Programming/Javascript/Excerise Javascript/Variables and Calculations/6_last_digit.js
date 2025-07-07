// Accept a value and find last digit of it.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let a = prompt("Enter a value : ");
let b = a % 10;

console.log("Last digit of " + b);