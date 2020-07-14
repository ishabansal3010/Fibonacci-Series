a = 0
b = 1
n = 2
print(a)
print(b)

#loop to give fibonacci numbers till 15th digit
#by changing maximum value of n in loop condition we can print the fibonacci numbers till that digit

while n <= 15:
    c = a + b
    print(c)
    n+=1
    a = b
    b = c
