try:
    age = int(input("Enter your age: "))

    if age < 18:
        raise Exception("Custom Exception: Age must be 18 or above.")

    print("Eligible: Age is 18 or above.")

except Exception as e:
    print(e)