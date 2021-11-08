"""
x = ['ab','cd']
for i in range(len(x)):
    x.append(x[i].upper())
print(x)
"""

'''
x=['f', 's', 'a', 'r']
for i in x:
    print(ord(i))
'''
'''
for i in range(10):

    for j in range(5):
        print("^", end=" ")

    print()
'''
'''
av=10
x=int(input("Enter the number of candies you want : "))

i=0
while(i<=x):
    i+=1
    if (i > av):
        break
    print("candy", i)

print("that's all folks")
'''


def module():
    print("hello world")
    print("name of this module is :", __name__)


str = "Niagara falls is the largest in the world"

lst = []
