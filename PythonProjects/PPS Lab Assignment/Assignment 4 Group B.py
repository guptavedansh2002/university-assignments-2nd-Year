def sqrt(n):
    root = n ** 0.5
    return root


def sqr(n):
    sq = n ** 2
    return sq


def cube(n):
    cub = n ** 3
    return cub


def prime(n):
    for i in range(2, n):
        if n % i == 0:
            result = False
            break
    else:
        result = True
    return result


def factorial(n):
    fact = 1
    if n < 0:
        print("Enter a Positive Integer.")

    elif n == 0:
        print("Factorial of 0 is 1")
    else:
        for i in range(1, n + 1):
            if n == 1:
                return fact
            else:
                fact = fact * i
    return fact


n = int(input("Enter a number : "))

sr = sqrt(n)
print(f"Square root of {n} is {sr}")

s = sqr(n)
print(f"Square of {n} is {s}")

c = cube(n)
print(f"Cube of {n} is {c}")

r = prime(n)
if r:
    print(f"{n} is a Prime Number")

else:
    print(f"{n} is not a Prime Number")

f = factorial(n)
print(f"Factorial of {n} is {f}")
