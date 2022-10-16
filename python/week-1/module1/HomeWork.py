# 1. take three input from the user
# 2. add the three inputs and display the sum
num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))
num3 = int(input("Enter 3rd number: "))
sum = num1+num2+num3
print("Sum of three number: ", sum)

# 3. take two numbers then show the multiplication
num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))
mul = num1*num2
print("Multiplication of 2 numbers: ", mul)

# 4. take first name and last name as input and display full name
first_name = input("Enter 1st name: ")
last_name = input("Enter 2nd name: ")
full_name = first_name + " " + last_name
print(full_name)
print(f"{first_name} {last_name}")

# 5. take three inputs and output will be like: "Hey I am _____. My age is ____. I love to eat _____."
name = input("Enter name: ")
age = input("Age: ")
food = input("Favorite Food: ")
print(f"Hey I am {name}. My age is {age}. I love to eat {food}.")

# 6. take one input and display 4 times of that number
in_something = input("Enter something to display 4 times: ")
for i in range(1, 5):
    print(in_something)

# 7. (advanced) take degree C and convert the temperature to F
input_degree = int(input("Enter celsius temperature: "))
fahrenheit_tem = (9/5)*input_degree+32
print(f'Fahrenheit temperature is: {fahrenheit_tem}')
