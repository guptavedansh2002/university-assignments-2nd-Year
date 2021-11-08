lst = []


def sum_list(lst):
    n = int(input("Enter number of elements(integers) : "))
    for i in range(n):
        elements = int(input("Enter number : "))
        lst.append(elements)
    sum = 0
    for j in lst:
        sum += j
    return sum
s = sum_list(lst)
print("This is the list = ", lst)
print("Sum of the list is ", s)
