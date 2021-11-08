lst1 = []

n = int(input("Enter the Number of elements in the list : "))

for i in range(0, n):
    ele = int(input("Enter {} element : ".format(i + 1)))
    lst1.append(ele)

print(lst1)

print("The maximum value of list is : ", max(lst1))
print("The minimum value of list is : ", min(lst1))

print("The sum of list is : ", sum(lst1))
print("The average value of list is : ", sum(lst1) / n)
