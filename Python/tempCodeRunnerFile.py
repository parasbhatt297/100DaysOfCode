from art import calc_art
import os
print(calc_art , '\n' )

def calc(a , op , b):
    if op == '+': return a+b
    elif op == '-' : return a-b
    elif op == '*' : return a*b
    elif op == '/' : return a/b
    else :
      raise ValueError("Please Enter Correct Operator!")
ans = 0    
try:
    a = float(input("Enter First number: "))
    while True :
        print("+\n-\n*\n/\n")
        op = input("Pick an Operation: ")
        b = float(input("What is The next Number ? : "))
        ans = calc(a , op , b)
        print(f"{a} {op} {b} = {ans}")
        flag = input(f"Type 'y' to Continue calculating with {ans}, or type 'n' to start new calculation : ")
        if flag == 'n':
            os.system("cls")
            print(calc_art,'\n')
            a = float(input("Enter First number: "))
        else : a = ans 



except ValueError as e:
    print("Error:", e)

except ZeroDivisionError:
    print("Error: Cannot divide by zero!")
