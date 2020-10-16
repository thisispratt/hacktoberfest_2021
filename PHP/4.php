<?php
/**
 * Program to Multiply two Floating Point Number
 * floatval() is a function to get float value of a string.
 * 
 * PHP variable is not stricted by it's type, 
 * just type anything and it will automatically go to it's type
 * asterisk operator (*) it's mean for multiply integer.
 * 
 */
$x = floatval(readline("Enter 1st number : "));
$y = floatval(readline("Enter 2nd number : "));
$z = $x * $y;
echo "Float : ";
echo $z;
?>