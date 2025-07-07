// Write a program to accept 10 values and print its average.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let i = 1, val = 0, sum = 0, avg;

// for (i = 1; i <= 6; i++) {
//     val = parseInt(prompt("Enter value "+ i + ": "));

//     sum = sum + val;
//     avg = sum / 6;
// }
// console.log("Average is " + avg);

// or

for (i = 1; i <= 6; i++) {
    val = parseInt(prompt("Enter value " + i + ": "));

    sum = sum + val;
}

avg = sum / 6;

console.log("Sum is " + sum);
console.log("Average is " + avg);