secnum = int(input("Enter a large integer representing total seconds: "))

hours = secnum // 3600
minutes = (secnum % 3600) // 60
seconds = secnum % 60
print(f"{secnum} seconds are {hours} hours, {minutes} minutes, {seconds} seconds.")
