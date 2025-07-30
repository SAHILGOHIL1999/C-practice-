// Accept a value and print sum of second and second last digit.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let num = prompt("Enter a number : ");

if (num.length < 2) {
    console.log("Number must have at least two digits.");
} else {
    let secondDigit = parseInt(num[1]);
    let secondLastDigit = parseInt(num[num.length - 2]);
    let sum = secondDigit + secondLastDigit;
    console.log(`Second digit: ${secondDigit}`);
    console.log(`Second last digit: ${secondLastDigit}`);
    console.log(`Sum of Second and Second last digit: ${sum}`);
}