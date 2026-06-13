try:
    age = int(input("Enter age:"))
    if age<18:
       raise Exception("Age must be 18 or above")
    print("Eligible")
except Exception as e:
    print(e)       