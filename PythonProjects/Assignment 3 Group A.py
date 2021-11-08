name = input("Enter your name : ")
roll = input("Enter your Roll Number : ")
div = input("Enter your Division : ")
print("All marks enter below should be OUT OF 100")
eng = float(input("Enter your English Marks : "))
phy = float(input("Enter your Physics Marks : "))
chem = float(input("Enter your Chemistry Marks : "))
math = float(input("Enter your Mathematics Marks : "))
cs = float(input("Enter your Computer Science Marks : "))
print("Total Maximum Marks : 500")
total = eng+phy+chem+math+cs
avg = total/5
percent = (total/500)*100
print("Total marks obtained out of 500 : ", total)
print("Average of all 5 marks obtained : ", avg)
print("Percentage obtained : " + str(percent) + "%")

if percent>40:
    print("Pass")
else:
    print("Fail")