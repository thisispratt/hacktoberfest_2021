def sortLexo(my_string):

	# Split the my_string till where space is found.
	words = my_string.split()
	
	# sort() will sort the strings.
	words.sort()

	# Iterate i through 'words' to print the words
	# in alphabetical manner.
	for i in words:
		print( i )

# Driver code
if __name__ == '__main__':
	
	my_string = "hello this is example how to sort " \
			"the word in alphabetical manner"
	# Calling function
	sortLexo(my_string)
