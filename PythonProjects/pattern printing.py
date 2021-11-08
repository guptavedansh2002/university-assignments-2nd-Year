""" # For printing normal pattern.
r = int(input("Enter the number of rows : "))
c = int(input("Enter the number of columns : "))

for i in range(0,r):
    for j in range(0,c):
        print("#", end=" ")
    print()
"""
""" #For printing pattern in pyramid type.
n = int(input("Enter the maximum number of character printed at the base of the pyramid : "))
chr1 = str(input("Enter the single character to be printed : "))
for i in range(0, n):
    for j in range(i + 1):
        print(chr1, end=" ")
    print()
"""

n = int(input("Enter the maximum number of character printed at the base of the pyramid : "))
for i in range(n, 1):
    for j in range(i-1):
        print("#", end=" ")
    print()
