# one-liner because why not
print('Yup, that\'s an armstrong number' if int((n := input('Type your number: '))) == sum([int(x)**3 for x in n]) else 'Nah, that\'s not an armstrong number')
