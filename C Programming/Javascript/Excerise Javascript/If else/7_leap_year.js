// Write a program to check whether a year is leap year or not. 

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = parseInt(prompt("Enter a value : "));

if(val % 4 == 0){
    console.log(val +" is leap year.");
}

else
{
    console.log(val + " is not leap year.");
}