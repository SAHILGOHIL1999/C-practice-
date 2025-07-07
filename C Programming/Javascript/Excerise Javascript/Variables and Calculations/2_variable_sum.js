// Accept two values and print addition of it.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let a = prompt("Enter 1st value : ");
let b = prompt("Enter 2nd value : "); 

console.log("sum : " + (parseInt(a) + parseInt(b)));