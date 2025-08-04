// Return addition, subtraction, division and multiplication from a single function

"user strict";

const ps = require("prompt-sync");
const prompt = ps();

let a = parseInt(prompt("Enter a value : "));
let b = parseInt(prompt("Enter a value : "));
let operation;

function getCalculation(a, b, operation) {
    if (operation == 1)
        return a + b;

    else if (operation == 2)
        return a - b;

    else if (operation == 3)
        return a * b;

    else if (operation == 4)
        return a / b;

    else if (operation == 5)
        return a % b;
}

console.log(`Addition is ${getCalculation(a, b, 1)}`);
console.log(`Substraction is ${getCalculation(a, b, 2)}`);
console.log(`Division is ${getCalculation(a, b, 3)}`);
console.log(`Multiplication is ${getCalculation(a, b, 4)}`);
console.log(`Modular is ${getCalculation(a, b, 5)}`);