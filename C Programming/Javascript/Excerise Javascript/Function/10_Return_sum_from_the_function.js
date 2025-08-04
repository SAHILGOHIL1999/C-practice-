//  Return sum from the function

"user strict";

const ps = require("prompt-sync");
const prompt = ps();

function doSum(a, b){
    return a + b;
}

let a = parseInt(prompt("Enter a value : "));
let b = parseInt(prompt("Enter a value : "));

let sum = 0;

sum = doSum(a, b);
console.log(`Addition is ${sum}`);