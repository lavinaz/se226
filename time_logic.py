secnum=int(input("enter alarge integer representing a total number of seconds"))

minutes = (secnum % 3600) // 60
hours=minutes//60
seconds = secnum % 60
print(f"{secnum} seconds are {hours} hours, {minutes} minutes, {seconds} seconds.")




