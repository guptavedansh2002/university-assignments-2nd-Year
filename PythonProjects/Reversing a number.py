num = int(input("Enter a Number : "))
rev = 0


def reverse_num(num):
    global rev

    if (num > 0):
        rem = num % 10
        rev = rev * 10 + rem
        reverse_num(num//10)
    return rev



reverse_num(num)
print(rev)
