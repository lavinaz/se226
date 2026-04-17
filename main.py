import data_package

user_input = input("Enter a comma-separated list of numbers (e.g., 12, 5, 12, 8 , 21): ")
list = user_input.split(",")
new_list = data_package.strip_whitespaces(list)

num_list = []
for x in new_list:
    if x != "":
        num_list.append(float(x))

unique_data = data_package.remove_duplicates(num_list)

print(f"Cleaned and unique data: {unique_data}")
print("--------------------")
print(f"Mean: {data_package.calculate_mean(unique_data):.2f}")
print(f"Maximum: {data_package.find_maximum(unique_data)}")
print(f"Minimum: {data_package.find_minimum(unique_data)}")


