def case_counter(str):
    upper_count = 0
    lower_count = 0
    for i in str:
        if i.isupper():
            upper_count += 1
        elif i.islower():
            lower_count += 1
        else :
            pass
    print("Upper Case Letters Count = ", upper_count)
    print("Lower Case Letter Count = ", lower_count)

case_counter("The quick Brow Fox")
