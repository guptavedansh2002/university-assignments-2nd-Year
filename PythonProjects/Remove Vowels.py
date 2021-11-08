vowels = "aeiouAEIOU"
def remove_vowel(string):
    newstring = ""
    for i in string:
        if i in vowels:
            continue
        else:
            newstring += i
    print(newstring)
    return string

string = "Grand Theft Auto V"

remove_vowel(string)