// Accept two values and print multiplication of it.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let a = prompt("Enter 1st value : ");
let b = prompt("Enter 2nd value : ");
let multiply = parseInt(a) * parseInt(b);

console.log(`Multiplication ${multiply}`);