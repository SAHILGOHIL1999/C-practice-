"use strict"

const ps = require("prompt-sync");
const prompt = ps();

let text = prompt("Enter a character: ");
let code = text.charCodeAt(0);

console.log(`ASCII value is ${code}`);
