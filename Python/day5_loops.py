fruits = ["Apple" , "Banana" , "Mango" , "Grapes" , "Pineapple" , "Oranges" , "Coconut" , "Berry"]
# for fruit in fruits:
#     print(fruit)
marks = [85, 72, 91, 68, 95, 78, 88, 56, 74, 82, 90, 63, 87, 79, 94, 66, 73, 81, 59, 92, 77, 84, 69, 96, 71, 88, 54, 80, 93, 76, 62, 89, 75, 98, 67, 83, 91, 58, 72, 86, 79, 64, 95, 70, 87, 53, 82, 90, 74, 99, 68, 85, 77, 61, 92, 80, 73, 96, 56, 88, 84, 69, 93, 75, 81, 57, 90, 78, 65, 97, 72, 86, 60, 94, 83, 76, 89, 55, 91, 67, 80, 98, 74, 63, 87, 71, 95, 82, 59, 90, 77, 84, 68, 92, 73, 99, 61, 88, 79, 85]
print(f"This is printed using help of Built in sum function===> {sum(marks)}")
print(f"This is printed using help of Built in max function===> {max(marks)}")
max_marks = totalMarks = 0
for mark in marks :
   totalMarks+=mark
   if mark>max_marks:
      max_marks = mark

print(max_marks)
print(totalMarks)