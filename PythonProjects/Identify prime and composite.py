n = int(input("Enter a number : "))
lstp = []
for i in range(1, n):
    if n % i != 0:
        ele = i
        lstp.append(ele)
        print(lstp)
print()
