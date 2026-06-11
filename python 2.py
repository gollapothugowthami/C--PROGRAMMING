try:
    a = int(input("Enter First number"))
    b = int(input("Enter Second number"))
    result = a / b
    print("Division =", result)
except(ZeroDivisionError,ValueError):
    print("Error occured")   