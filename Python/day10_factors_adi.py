#Error code
# value =int( input("Enter the Value: "))
# print(value) #will give runtime error for :  d1

#Solution : Use Exception Handling!!!!
try :
    value = int (input("Enter The Value: "))
    print(value)
except ValueError as e  :
    print(f"Error! : {e}")