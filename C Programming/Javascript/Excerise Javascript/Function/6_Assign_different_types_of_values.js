// Assign different types of values by reference in functions and print it.

function printValue(val){
    console.log(`The value is ${val}`);
}

let iVal = 25,
fVal = 43.45,
cVal = "A",
sVal = "Hello",
bVal = true;


// Call by reference

printValue(iVal);
printValue(fVal);
printValue(cVal);
printValue(sVal);
printValue(bVal);