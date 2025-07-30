// Accept two value and find highest common factor (HCF / GCD).

"use stirct";

const ps = require("prompt-sync");
const prompt = ps();

let number1 =  parseInt(prompt("Enter first value : "));
let number2 =  parseInt(prompt("Enter second value : "));
let hcf = 1;

for(let i = 1; i <= number1 && i <= number2; i++){
    if(number1 % i == 0 && number2 % i == 0){
        hcf = i;
    }
}

console.log(hcf);