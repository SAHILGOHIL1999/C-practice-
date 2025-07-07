//  Write a program to check whether a character is alphabet or not.

"use strict";

const ps = require("prompt-sync");
const prompt = ps();

let ch = prompt("Enter a value : ");

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        console.log(ch + " is an alphabet.")
    }
    else
    {
        console.log (ch + " is not an alphabet.");
    }