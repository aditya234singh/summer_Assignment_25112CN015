# WAP to find the greatest of 3 numbers entered by the user
a = int(print("enter first number:"))
b = int(print("enter secound number:"))
c = int(print("enter third number:"))
if(a>b and b>c):
    print("a is greatest")
elif(b>c and c>a):
    print("b is greatest")
elif(c>b and b>a):
    print("c is greatest")