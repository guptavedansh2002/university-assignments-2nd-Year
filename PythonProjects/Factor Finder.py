def factors(n):
    for i in range(2, n + 1):
        if n % i == 0:
            print(i)
        else:
            continue


n = int(input("Enter a Number: "))
if n <= 0:
    print("Enter a positive integer.")
elif n == 1:
    print("Factor of 1 is itself")
else:
    factors(n)
