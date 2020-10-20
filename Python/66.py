import random
array=input("Enter array elements seperated by space")
array=array.split(" ")
for i in random.sample(range(len(array)),len(array)):
	print(array[i],end=" ")
