// Print a sum of user defined two values by function / method

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

function doSum() {
    let val1 = 0, val2 = 0, sum = 0;

    val1 = parseInt(prompt("Enter a first value : "));
    val2 = parseInt(prompt("Enter a second value : "));

    sum = val1 + val2;
    console.log("Total sum is " + sum);
}

doSum();