// Accept a value and find all factors.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let number = parseInt(prompt("Enter a number to find its factor: "));

for(let i = 1; i <= number; i++){
    if(number % i == 0){
        console.log(i);
    }
}   