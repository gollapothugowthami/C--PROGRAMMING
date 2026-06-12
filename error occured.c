
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))

    result = a / b
    print("Result:", result)

except (ValueError, ZeroDivisionError) as e:
    print("Exception occurred:", e)

print("Program completed.")