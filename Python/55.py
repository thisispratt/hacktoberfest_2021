# 55. Program to Remove all Characters in a String Except Alphabets

String = input("Enter a string: ")

# >>>Enter a string: Program to Remove all characters in a String @@@@$^*(@^(*^%# except Al%(*&phab*(@$ets
#	 ProgramtoRemoveallcharactersinaStringexceptAlphabets 

alphabets_up = [chr(alpha) for alpha in range(65, 91)]
alphabets_low = [chr(alpha) for alpha in range(97, 123)]

ans_string = '' #String can't be mutated

for character in String:
    if character in alphabets_low or character in alphabets_up:
        ans_string += character

print(ans_string)