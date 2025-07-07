// Write a program to find maximum between two numbers.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let a = parseInt(prompt("Enter a value :"));
let b = parseInt(prompt("Enter a value :"));

if (a > b) {
    console.log("Bigger number" + a);
}

else if (b > a) {
    console.log("Bigger number" + b);
}

else {
    console.log("Equal");
}