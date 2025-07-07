// Write a program to check whether a number is negative and positive.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = parseInt(prompt("Enter a value : "));

if (val > 0)
{
    console.log(val + "is Postive number ");
}

else if (val < 0) 
{
    console.log(val + " is Negative number ");
}

else if (val == 0)
{
    console.log(val + " is Equal number ");
}

else
{
    console.log(val + " is not vaild ");
}