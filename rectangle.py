side = float(input("Enter the side of the square:"))
length = float(input("Enter the length of the rectangle:"))
breadth = float(input("Enter the breadth of the rectangle:"))
#calculating areas
square_area = side*side
rectangle_area = length*breadth
#Displaying results using f-string
print(f"Area of square    ={square_area:.3f}")
print(f"Area of Rectangle ={rectangle_area:.3f}") 