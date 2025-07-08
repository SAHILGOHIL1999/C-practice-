// . Write a program to print sum of odd and even numbers from 1 to 20.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let odd = 0, even = 0;

for (let i = 1; i <= 20; i++) {

    let val = parseInt(prompt("Enter a number : "));
    
    if (i % 2 == 0) {
        even = even + i;
    }

    else {
        odd = odd + i;
    }
}

console.log("Total even number :" + even);
console.log("Total odd number :" + odd);