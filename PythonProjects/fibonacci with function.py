def recur_fibo(n):
    "This is the operation for forming a Fibonacci Series by Taking a number of terms input from user."
    if n <= 1:
        return n
    else:
        return recur_fibo(n - 1) + recur_fibo(n - 2)



terms = int(input())
print(recur_fibo.__doc__)
if terms <= 0:
    print("Enter a positive non zero number!!")
else:
    for i in range(terms):
        print(recur_fibo(i), end=" ")