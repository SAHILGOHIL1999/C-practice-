// Write a program to check whether a number is even or odd.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = parseInt(prompt("Enter a value : "));

if (val % 2 == 0) {
    console.log(val + " is even number.");
}

else if (val % 2 != 0) {
    console.log(val + " is odd number.");
}

else if (val % 2 != 0) {
    console.log(val + " is odd number.");
}
else
{
    console.log("Invaild value");
}