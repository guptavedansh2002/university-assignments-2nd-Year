str = input("Enter a string : ")
chr = input("Enter the character which needs to be counted : ")

def counter(str, chr):
    count = 0
    for i in str:
        if i == chr:
            count +=1

        else:
            continue
    return count

num = counter(str, chr)
print(f'''Character "{chr}" was found in string "{str}" {num} times.''')