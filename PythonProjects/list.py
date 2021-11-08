list = [1, 56, 'usp', 'ucb']
list1 = [23, 555, "carrot", "trousers"]
liststr = ["Zephyr", "niko", "Tobey", "marshall"]
listnum = [66, 97, 985, 25, 2]
'''i=0
while i<len(list):
    print(list[i])
    i+=1'''
'''[print(x) for x in (list1)]'''
"""
newlist = [x for x in list2 if "z" in x]
print(newlist)

for x in list2:
    if "y" in x:
        newlist.append(x)

print(newlist)
"""
"""
liststr.sort()
print(liststr)

listnum.sort(reverse=True)
print(listnum)
"""
"""
n = int(input("Enter 1 or 2 or 3:"))
if n == 1:
    for x in list1:
        list.append(x)
    print(list)
elif n == 2:
    list += list1
    print(list)
elif n == 3:
    list.extend(list1)
    print(list)
else:
    print("you dumb motherfucker")
"""
