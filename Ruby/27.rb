print "Enter the number to check if it's a palindrome!:\t"
num = $stdin.gets.chomp.to_s
num = num.split(//)
num2 = num.reverse
pos = 0
flag = 1

for i in num
  if num[pos] != num2[pos] 
    flag = 0
  end
  pos = pos+1
end

if(flag == 1)
  print "\nThe entered number is a palindrome"

else
  print "\nThe entered number is not a palindrome"
end

