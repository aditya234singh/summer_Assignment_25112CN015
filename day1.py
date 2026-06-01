# question => search for a number x in a list using loop

nums = [1,4,9,16,24,36,49,64,81,100]
x = 49

idx = 0
for el in nums:
    if(el==x):
        print("number found at idx",idx)
        idx += 1