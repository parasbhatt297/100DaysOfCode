import random
print("Welcome to PyPassword Generator!")
letters = int(input("How many Letter would you like in your Password?\n"))
symbols = int(input("How many Symbols would you like in your Password?\n"))
numbers = int(input("How many Numbers would you like in your Password?\n"))
characters = [
    ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9'],
    ['!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '-', '_', '+', '='],
    ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
     'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
     'u', 'v', 'w', 'x', 'y', 'z',
     'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
     'U', 'V', 'W', 'X', 'Y', 'Z']
]
finalPass = ""
passlist  = []
for i in range(letters):
 passlist.append(random.choice(characters[2]))
for i in range(numbers):
 passlist.append(random.choice(characters[0]))
for i in range(symbols):
 passlist.append(random.choice(characters[1]))
random.shuffle(passlist)
for char in passlist:
 finalPass+=char
print("Your Final Password is : " + finalPass)
