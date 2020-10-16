<?php
/**
 * Program to Add Two Integers 
 * 
 * variable x is valued 10, variable y is valued 5
 * we can add two varibles directly into echo or even in a variables (Z)
 * 
 * intval() is a builtin php function to get integer value in string
 * 
 */
$x = intval(readline("Enter 1st number : "));
$y = intval(readline("Enter 2nd number : "));
$z = $x + $y;
echo "Variable z :";
echo $z;
echo "\nimmediately add : ";
echo $x + $y;
?>