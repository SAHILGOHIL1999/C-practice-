//  Write a program to check whether a number is divisible by 5 and 11 or not.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = parseInt(prompt("Enter a value : "));

if (val % 5 == 0 || val % 11 == 0)
{
    console.log("Value is divisible");
}

else
{
    console.log("Value is not divisible");
}