# s = 'a'+5
# print(s) #it will give error because it's not allowed in python !



# 1. Character to Integer Conversion-> ord('a') = 97
charindex = ord('a')+5
print(charindex)
print(type(charindex))  #102  and <class 'int'>


#2. Integer to Character Conversion-> chr(int) => char
newchar = chr(charindex)
print(newchar)
print(type(newchar)) # f and class str