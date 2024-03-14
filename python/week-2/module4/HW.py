# any type of parameter summation
def sum(*args):
    sum = 0
    for num in args:
        sum+=num
    return sum

print(sum(10,20,30.33,40,50))

# any type of parameter multiplication
def mul(*args):
    mul=1
    for num in args:
        mul*=num
    return mul
print(mul(1,2.2,3.5,4,5))

# small and big number from numbers
def find_small_big(*args):
    small = args[0]
    big = args[0]
    for num in args:
        if num>big:
            big=num
        if num<small:
            small=num
    return (small,big)
print(find_small_big(1,2,3,4,5,6,7,8,9))

# all type of mathematical operator use base on condition(condition: digit range (0-9))
def operation(op):
    num1 = float(op[0])
    operand = op[1]
    num2 = float(op[2])
    if operand == "+":
        cal=num1+num2
    elif operand == "-":
        cal = num1-num2
    elif operand == "*":
        cal = num1*num2
    elif operand == "/":
        cal = num1/num2
    elif operand == "%":
        cal = num1%num2
    return cal

print(operation("1+2"))
print(operation("1-2"))
print(operation("1*2"))
print(operation("1/2"))
print(operation("1%2"))

inp = input("Enter 2 number with operator(Like, 2+3): ")
print(operation(inp))