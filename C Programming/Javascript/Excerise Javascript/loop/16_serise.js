//  . Write a program to print series as below.

// • 1 3 5 7 9 11 13 15 17 19

for (let i = 1; i <= 20; i++) {
    if (i % 2 != 0)
        console.log(i);
}


// • 2 4 6 8 10 12 14 16 18 20

for (let i = 1; i <= 20; i++) {
    if (i % 2 == 0)
        console.log(i);
}


// • 1 4 9 16 25 36 49 64 81 100

for (let i = 1; i <= 10; i++) {
    console.log(i * i);
}


// • 1 8 27 64 125 216 243 512 729 1000

for (let i = 1; i <= 10; i++) {
    console.log(i * i * i);
}


// • 1 3 7 13 21 31 43 57 73 91 (sq and -0..-1..-2..-3..-4..-5..-6) 


for (let i = 1; i <= 10; i++) {
    console.log((i * i) - (i - 1));
}