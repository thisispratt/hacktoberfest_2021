<?php
/**
 * program to Compute Quotient and Remainder
 * 
 * the slash operator (/) is operator for divide an integer.
 * the modulus operator (%) is operator for get the quotient of 2 value.
 * 
 */
$x = intval(readline("Enter The Number : "));
$div = intval(readline("Enter the divider : "));
$remainder = $x / $div;
$quotient = $x % $div;
echo "the Remainder is : " . $remainder;
echo "\nthe Quotient is : " . $quotient;
?>