//  Write a program to find LCM of two numbers.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let number1 = parseInt(prompt("Enter first value : "));
let number2 = parseInt(prompt("Enter second value : "));
let gcd = 1;
let lcm = 0;

for (let i = 1; i <= number1 && i <= number2; i++) {
    if (number1 % i == 0 && number2 % i == 0)
        gcd = i;
    console.log(gcd);
}

lcm = (number1 * number2) / gcd;
console.log("GCD is : " + gcd);
console.log("LCM is : " + lcm);

// LCM(a, b) = (a * b) / GCD(a, b)