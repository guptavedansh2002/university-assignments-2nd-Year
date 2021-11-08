lst = []
terms = int(input("Enter the number of terms in Fibonacci Series : "))

a = 0
b = 1

i = 0
if terms <= 0:
    print(None)
else:
    while i < terms:
        sum = a + b
        a = b
        b = sum
        i += 1
        lst.append(a)
    print(lst)
