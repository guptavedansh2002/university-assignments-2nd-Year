def max_num(a, b, c):
    if a > b:
        if a > c:
            print(f"{a} is Maximum.")
        elif a < c:
            print(f"{c} is  Maximum.")
        else:
            print(f"{a} is Maximum.")
    elif a < b:
        if b > c:
            print(f"{b} is Maximum.")
        elif b < c:
            print(f"{c} is Maximum.")
        else:
            print(f"{b} is Maximum.")
    elif a == b:
        if a < c or b < c:
            print(f"{c} is Maximum.")
        elif a > c or b > c:
            print(f"{a} is Maximum.")
        elif a == b == c:
            print("All numbers are same.")


a = int(input("Enter 1st number : "))
b = int(input("Enter 2nd number : "))
c = int(input("Enter 3rd number : "))
max_num(a, b, c)
