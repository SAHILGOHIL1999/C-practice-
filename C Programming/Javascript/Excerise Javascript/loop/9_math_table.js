// Accept a value and print math table of it.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let num, multiply;
num = parseInt(prompt("Math table = "));

for(let i = 1; i <= 10; i++){
    multiply = num * i; 
    console.log(num + " * " + i + " : " + multiply);
}

