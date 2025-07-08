// Accept values till user wants and print sum of them

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

//  let sum = 0;

// do 
// {
//     let val = parseInt(prompt("Enter a value : "));
//     sum = sum + val;

//     ans = prompt("Do you want to add more? (y/n) : ");
// }

// while(ans == "y" || ans == "Y");

// console.log(`Sum is ${sum}`);

let ans = "0";
let sum = 0;

for (let i = 1; i <= 5; i++) {
    let val = parseInt(prompt("Enter a value : "));
    sum = sum + val;

    ans = prompt("Do you want to add more? (y/n) : ");
    if (ans == "n") break;
}
console.log(sum);
