import  geometry_utils

dict={"circle_area": geometry_utils.circle_area,
      "circle_perimeter": geometry_utils.circle_perimeter,
      "rectangle_area": geometry_utils.rectangle_area,
      "rectangle_perimeter": geometry_utils.rectangle_perimeter,
      "triangle_area": geometry_utils.triangle_area
     }



ans=input("Available shapes: circle, rectangle, triangle\nAvailable calculations: _area, _perimeter (e.g., circle_area)\nEnter the operation you want to perform:")

if ans == "circle_area":
    r = float(input("Enter radius: "))
    print(f"Result: {geometry_utils.circle_area(r):.2f}")

elif ans == "circle_perimeter":
    r = float(input("Enter radius: "))
    print(f"Result: {geometry_utils.circle_perimeter(r):.2f}")

elif ans == "rectangle_area":
    w = float(input("Enter width: "))
    h = float(input("Enter height: "))
    print(f"Result: {geometry_utils.rectangle_area(w,h):.2f}")

elif ans == "rectangle_perimeter":
    w = float(input("Enter width: "))
    h = float(input("Enter height: "))
    print(f"Result: {geometry_utils.rectangle_perimeter(w,h):.2f}")

elif ans == "triangle_area":
    b = float(input("Enter base: "))
    h = float(input("Enter height: "))
    print(f"Result: {geometry_utils.triangle_area(b,h):.2f}")

else:
    print("Invalid operation!")