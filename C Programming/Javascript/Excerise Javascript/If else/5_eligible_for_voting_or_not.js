//  Write a program to check whether an age is eligible for voting or not.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = parseInt(prompt("Enter a value : "));

if (val >= 18)
{
    console.log(val + " is eligible for voting.");
}

else
{
    console.log(val + " is not eligible for voting.");
}