// JavaScript program to swap two variables

// take input from the users
let a = prompt('Enter the first variable: ');
let b = prompt('Enter the second variable: ');

// create a temporary variable
let temp;

// swap variables
temp = a;
a = b;
b = temp;

console.log(`The value of a after swapping: ${a}`);
console.log(`The value of b after swapping: ${b}`);

// Output

// Enter the first variable: 4
// Enter the second variable: 2
// The value of a after swapping: 2
// The value of b after swapping: 4