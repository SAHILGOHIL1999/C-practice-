// Accept a value and swap first and last digits of a number.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let num = parseInt(prompt("Enter a number : "));
let numStr = num.toString();

if (numStr.length === 1) {
    // If single digit, swapping does nothing
    console.log(`Swap number : ${num}`);
} else {
    let firstDigit = numStr[0];
    let lastDigit = numStr[numStr.length - 1];
    let middle = numStr.substring(1, numStr.length - 1);
    let swappedNumStr = lastDigit + middle + firstDigit;
    let swappedNum = parseInt(swappedNumStr);
    console.log(`Swap number : ${swappedNum}`);
}



