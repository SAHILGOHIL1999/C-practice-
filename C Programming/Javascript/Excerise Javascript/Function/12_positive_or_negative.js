// // Check positive or negative using functions.

"user strict";

const ps = require("prompt-sync");
const prompt = ps();

let val = parseInt(prompt("Enter a value : "));

function isPositive(val) {
    if (val > 0)
        return 1

    else if (val < 0)
        return 0;

    else
        return 2;
}

let result = 0;

result = isPositive(val);     // Use the actual user input

if (result == 1)
    console.log("Value is positive");

else if (result == 0)
    console.log("Value is negative");

else
    console.log("Value is zero");

// function isPositive(val) {
//     if (val > 0)
//         console.log("Value is positive");

//     else if (val < 0)
//         console.log("Value is negative");

//     else
//         console.log("Value is zero");
// }

// isPositive(val);

