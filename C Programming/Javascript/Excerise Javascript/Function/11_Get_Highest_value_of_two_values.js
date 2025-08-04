// Get Highest value of two values using functions.

"user strict";

const ps = require("prompt-sync");
const prompt = ps();

function getHighest(a, b) {
    if (a > b)
        return a;

    else if (b > a)
        return b;
}

let a = parseInt(prompt("Enter a value : "));
let b = parseInt(prompt("Enter a value : "));

console.log(`Highest value = ${getHighest(a, b)}`);