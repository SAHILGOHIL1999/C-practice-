// Accept a value and find second last digit of it.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let value = prompt("Enter a value : ");
let digit = 0;

value = parseInt(value / 10);
digit = value % 10;

console.log("Second last digit : " + digit);