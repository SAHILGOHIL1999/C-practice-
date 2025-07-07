// Accept 10 values and print positive and  negative numbers.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = 0;

for (let i = 1; i <= 10; i++) {
    val = parseInt(prompt("Enter value " + i + ": "));

    if (val > 0) 
    {
        console.log(val + " is a positive number");
    }

    else if (val < 0) 
    {
        console.log(val + " is a negative number");
    } 
    
    else 
    {
        console.log(val + " is zero");
    }
}

