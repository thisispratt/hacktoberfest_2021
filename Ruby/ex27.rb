print "Enter the number to check if it's a palindrome!:\t"
num = $stdin.gets.chomp.to_i
num2 = num
rev = 0

while(num > 0)
  digit = num % 10    
  rev = rev * 10 + digit
  num = num/10
end

if(rev == num2)
  print "\nThe entered number is a palindrome"

else
  print "\nThe entered number is not a palindrome"
end

