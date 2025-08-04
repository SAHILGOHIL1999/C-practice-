// Return addition, subtraction, division and multiplication from the function.

// "user strict";

// const ps = require("prompt-sync");
// const prompt = ps();

function getAddition(a, b) {
    return a + b;
}

function getSubstraction(a, b) {
    return a - b;
}

function getDivision(a, b) {
    return a / b;
}

function getMultiplication(a, b) {
    return a * b;
}

// let a = parseInt(prompt("Enter a value : "));
// let b = parseInt(prompt("Enter a value : "));

// console.log(`Addition is ${getAddition(a, b)}`);
// console.log(`Substraction is ${getSubstraction(a, b)}`);
// console.log(`Division is ${getDivision(a, b)}`);
// console.log(`Multiplication is ${getMultiplication(a, b)}`);

console.log(`Addition is ${getAddition(20, 40)}`);
console.log(`Substraction is ${getSubstraction(30, 15)}`);
console.log(`Division is ${getDivision(24, 3)}`);
console.log(`Multiplication is ${getMultiplication(4, 6)}`);