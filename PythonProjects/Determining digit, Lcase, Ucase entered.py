char1 = input("Enter any single character (Lower or Upper case letter,digit). : ")

if char1.isalpha():  # var.isalpha =
    if char1.isupper():      # variable.isupper = if the input of the variable is in upper case.
        print("Uppercase Alphabet")
    else:    # We can also use var.islower for checking input of the variable is in lower case.
        print("Lowercase Alphabet")

else:
    print("Digit")