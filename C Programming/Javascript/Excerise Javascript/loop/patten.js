// let pattern = "";           
// for (let i = 1; i <= 5; i++) {
//     for (let j = 1; j <= i; j++) {
//         pattern += "*";  // Append '*' to the pattern string
//     }
//     pattern += "\n";     // Add a newline character after each row
// }
// console.log(pattern);       
// // Output will be:
// // *
// // **   
// // ***  
// // ****
// // *****

let pattern = "";

for (let i = 1; i <= 5; i++) {
    for (let j = 1; j <= 5; j++) {
        pattern += "*";
    }
    pattern += "\n";        
}
console.log(pattern);
    