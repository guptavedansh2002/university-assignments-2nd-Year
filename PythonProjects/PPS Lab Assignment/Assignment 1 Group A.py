name = input("Enter your name: ")
id = input("Enter your Employee ID: ")
bsal = float(input("Enter Your Basic Salary : "))  # bsal = basic salary
print(f'''{name}
Employee ID - {id}''')
print("Basic Salary : ", bsal)
hra = 0.1 * bsal  # hra = House Rent Allowance
print("House Rent Allowance : ", hra)
ta = 0.05 * bsal  # ta = Tax Allowance
print("Tax Allowance : ", ta)
grosal = bsal + hra + ta  # grosal = Gross Salary
print("Gross Salary : ", grosal)
proftax = grosal * 0.02
print("Employee Pay Professional Tax : ", proftax)
netsal = grosal - proftax
print("Net Payable Salary : ", netsal)
