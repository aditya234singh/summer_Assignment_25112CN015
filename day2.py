# question => take marks of students as input and assign them grades
marks = int(print("input marks:"))
if(marks >= 90):
    grade = "A"
elif(marks <90 and marks >80):
    grade = "B"
elif(marks<80 and marks>=70):
    grade = "C"
elif( marks<70):
 grade="D"
 print("grade of the student",grade)
