// Write a program to calculate the sum of numbers from 1 to n using recursion. 

"user strict";

const ps = require("prompt-sync");
const prompt = ps();

function getSumOfRange(n1) {
    let res;

    if (n1 == 1)
        return 1;

    else
        res = n1 + getSumOfRange(n1 - 1);   // calling function itself 

    return res;
}

let val;
let sum;
val = parseInt(prompt("Input last number of the range from 1 to : "));
sum = getSumOfRange(val);
console.log(`The sum is ${sum}`);