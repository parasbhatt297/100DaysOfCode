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
total_length = letters+symbols+numbers
while total_length>0:
    first = random.randint(0,2)
    second = random.randint(0,len(characters[first])-1)
    if first == 0 and numbers>0 :
           finalPass+=characters[first][second]
           total_length-=1
           numbers-=1
    elif first==1 and symbols>0 :
           finalPass+=characters[first][second]
           total_length-=1
           symbols-=1
    elif first ==2 and letters>0 :
             finalPass+=characters[first][second]
             total_length-=1
             letters-=1

print("Your Final Password is : " + finalPass)
