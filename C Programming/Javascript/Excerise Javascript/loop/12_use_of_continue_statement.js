// use of continue statement

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

// will not work with while loop
for (let i = 1; i <= 5; i++) {
    let val = parseInt(prompt("Enter value :"));

    if (i == 3)
        continue;                 // used to skip loop step

    console.log(i);
}