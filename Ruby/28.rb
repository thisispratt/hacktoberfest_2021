print "Enter a number!:"
num = $stdin.gets.chomp.to_i
flag = 0

for i in  2..num/2
  if num%i == 0
    flag = 1
    break
  end
end

if flag == 1 || num <=1
  print "The entered number is not a prime number"
else
  print "The entered number is a prime number"
end
