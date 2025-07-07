// Write a program to check whether a number is divisible by 5 or not.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = parseInt(prompt("Enter a value : "));

if (val % 5 == 0) 
{
    console.log(val +" is divisible by 5");
}

else
{
    console.log(val +" is not divisible by 5");
}