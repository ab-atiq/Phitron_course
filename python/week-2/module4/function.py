def double_it(num):  # make double
    result = num*2
    print(result)

double_it(34)

def add(num1, num2):  # sum of two number
    sum = num1+num2
    return sum

total = add(23, 53)
print(total)

def multiply(n1, n2):  # multiply of two number
    mul = n1*n2
    return mul

multiply_result = multiply(15, 35)
print(multiply(15, 35))

# variable pass as parameter in function
re_add = add(total, multiply_result)
print(re_add)
